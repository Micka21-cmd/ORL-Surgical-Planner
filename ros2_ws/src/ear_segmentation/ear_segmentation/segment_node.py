#!/usr/bin/env python3
import os
import rclpy
from rclpy.node import Node
from ear_msgs.srv import SegmentEar
import nibabel as nib
import numpy as np
from scipy.ndimage import gaussian_filter
from skimage.filters import threshold_otsu


class SegmentNode(Node):
    def __init__(self):
        super().__init__('segment_node')
        self.srv = self.create_service(SegmentEar, 'segment_ear', self.segment_cb)
        self.get_logger().info('segment_ear service ready')


    def segment_cb(self, req: SegmentEar.Request, resp: SegmentEar.Response):
        mri_path = req.mri_path
        assert os.path.exists(mri_path), f"MRI not found: {mri_path}"
        img = nib.load(mri_path)
        vol = img.get_fdata().astype(np.float32)
        vol = gaussian_filter(vol, sigma=1.0)
        # normalize to [0,1]
        v = vol
        v = (v - np.percentile(v, 2)) / (np.percentile(v, 98) - np.percentile(v, 2) + 1e-6)
        v = np.clip(v, 0.0, 1.0)
        # simple Otsu threshold as a placeholder
        t = threshold_otsu(v)
        mask = (v > t).astype(np.uint8)
        # invert if foreground too large
        if mask.mean() > 0.5:
            mask = 1 - mask
        out_dir = os.path.join(os.path.dirname(mri_path), '..', 'mri_processed')
        os.makedirs(out_dir, exist_ok=True)
        mask_path = os.path.abspath(os.path.join(out_dir, 'canal_mask.nii.gz'))
        nib.save(nib.Nifti1Image(mask, img.affine), mask_path)
        # no mesh in MVP
        resp.mask_path = mask_path
        resp.mesh_path = ''
        self.get_logger().info(f'Saved mask to {mask_path}')
        return resp


def main():
    rclpy.init()
    node = SegmentNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()