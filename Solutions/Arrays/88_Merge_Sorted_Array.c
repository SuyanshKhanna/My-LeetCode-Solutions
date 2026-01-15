void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    // int k,c=0;
    // int i = nums1Size + nums2Size-1;
    // nums1Size -= 1;
    // nums2Size -= 1;
    // while (nums2Size >= 0 && nums1Size>=0) {
    //     if (nums1Size >= 0 && nums1[nums1Size] > nums2[nums2Size]) {
    //         nums1[i] = nums1[nums1Size];
    //         nums1Size--;
    //     } else {
    //         nums1[i] = nums2[nums2Size];
    //         nums2Size--;
    //     }
    //     i--;
    // }
     int index = m + n - 1;
  m--, n--;
  while (m >= 0 || n >= 0) {
    if (m >= 0 && n >= 0) {
      if (nums1[m] > nums2[n]) {
        nums1[index--] = nums1[m--];
      } else {
        nums1[index--] = nums2[n--];
      }
    } else if (n < 0) {
      nums1[index--] = nums1[m--];
    } else {
      nums1[index--] = nums2[n--];
    }
  }

    
}
