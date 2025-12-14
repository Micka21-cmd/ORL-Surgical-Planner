ORL Surgical Planner (ROS 2 Jazzy, WSL)

This cheat‑sheet shows EXACT commands to run in each terminal, plus how to
force the overlay if ROS2 can’t find the package (note: the package name is
`ear_planner`, sometimes confused with `path_planner`).

──────────────────────────────────────────────────────────────────────────────
0) COMMON (run at the START of EVERY terminal)
──────────────────────────────────────────────────────────────────────────────
source /opt/ros/jazzy/setup.bash
source ~/orlsurg/ros2_ws/install/local_setup.bash
export RMW_FASTRTPS_USE_SHM=0   # recommended under WSL
cd ~/orlsurg/ros2_ws

# Quick sanity checks (optional):
ros2 pkg list | grep ^ear_ || echo "(!) Overlay not loaded"
ros2 pkg prefix ear_planner || echo "(!) ear_planner not visible"

──────────────────────────────────────────────────────────────────────────────
1) TERMINAL 1 — Launch all nodes
──────────────────────────────────────────────────────────────────────────────
SDF=$(realpath data/mri_processed/sdf_mm.nii.gz)
MASK=$(realpath data/mri_processed/canal_mask.nii.gz)
ros2 launch ear_planner planning_demo.launch.py sdf_path:=$SDF mask_path:=$MASK

# Fallback (absolute path launch if package resolution fails):
# ros2 launch ~/orlsurg/ros2_ws/src/ear_planner/launch/planning_demo.launch.py \
#   sdf_path:=$SDF mask_path:=$MASK

──────────────────────────────────────────────────────────────────────────────
2) TERMINAL 2 — Generate data, then send a planning goal
──────────────────────────────────────────────────────────────────────────────
# Generate a synthetic MRI (if you don’t have a real one yet)
python3 ../tools/synthetic_ear.py --out data/mri_raw/synth.nii.gz

# 2.1 Segmentation -> writes canal_mask.nii.gz
ros2 service call /segment_ear ear_msgs/srv/SegmentEar \
"{mri_path: '$(realpath data/mri_raw/synth.nii.gz)'}"

# 2.2 Centerline + SDF -> writes sdf_mm.nii.gz
ros2 service call /compute_centerline ear_msgs/srv/Centerline \
"{mask_path: '$(realpath data/mri_processed/canal_mask.nii.gz)'}"

# 2.3 Create a simple goal file (edit numbers as you like)
cat > goal.yaml <<'YAML'
entry:
  header: {frame_id: mri}
  pose: {position: {x: -20.0, y: 0.0, z: 0.0}}
target:
  header: {frame_id: mri}
  pose: {position: {x:  20.0, y: 0.0, z: 0.0}}
tool_diam_mm: 1.5
safety_margin_mm: 0.5
YAML

# 2.4 Send the goal (with live feedback)
ros2 action send_goal --feedback /plan_path ear_msgs/action/PlanPath "$(cat goal.yaml)"

# Optionally, print the path once when it’s published:
ros2 topic echo /planned_path --once

# Useful parameters check:
ros2 param get /planner sdf_path
ros2 param get /planner mask_path

──────────────────────────────────────────────────────────────────────────────
3) TERMINAL 3 — RViz2 visualization
──────────────────────────────────────────────────────────────────────────────
rviz2
# In RViz:
#   Global Options → Fixed Frame = mri
#   Add → Path → Topic = /planned_path → Style = Lines (Line Width ~0.02)
#   Press 'r' (Reset) to re-center the camera

# If you prefer Fixed Frame = map, publish a static TF and set Fixed Frame = map:
# ros2 run tf2_ros static_transform_publisher 0 0 0 0 0 0 map mri

──────────────────────────────────────────────────────────────────────────────
If ROS 2 can’t find the package (force the overlay)
──────────────────────────────────────────────────────────────────────────────
# Symptom:
#   Package 'ear_planner' not found: "package 'ear_planner' not found..."

# Fix sequence (paste in the terminal where it fails):
source /opt/ros/jazzy/setup.bash
source ~/orlsurg/ros2_ws/install/local_setup.bash
export AMENT_PREFIX_PATH=$PWD/install:$AMENT_PREFIX_PATH
export CMAKE_PREFIX_PATH=$PWD/install:$CMAKE_PREFIX_PATH

# Verify:
ros2 pkg prefix ear_planner

# As an immediate workaround, launch by absolute path:
# ros2 launch ~/orlsurg/ros2_ws/src/ear_planner/launch/planning_demo.launch.py \
#   sdf_path:=$(realpath data/mri_processed/sdf_mm.nii.gz) \
#   mask_path:=$(realpath data/mri_processed/canal_mask.nii.gz)

──────────────────────────────────────────────────────────────────────────────
Full rebuild (if the workspace was moved or things look stale)
──────────────────────────────────────────────────────────────────────────────
cd ~/orlsurg/ros2_ws
source /opt/ros/jazzy/setup.bash
rm -rf build/ install/ log/
colcon build --symlink-install --merge-install
source install/local_setup.bash

# Ensure executables are marked as runnable (only once if needed):
chmod +x src/ear_segmentation/ear_segmentation/segment_node.py \
         src/ear_centerline/ear_centerline/centerline_node.py \
         src/ear_planner/ear_planner/planner_action_server.py

