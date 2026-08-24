#include <vector>
#include <algorithm>
#include <climits>

class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
        // Ensure nums1 is the smaller array to optimize binary search runtime
        if (nums1.size() > nums2.size()) {
            return findMedianSortedArrays(nums2, nums1);
        }
        
        int m = nums1.size();
        int n = nums2.size();
        int low = 0;
        int high = m;
        
        while (low <= high) {
            int partitionX = low + (high - low) / 2;
            int partitionY = (m + n + 1) / 2 - partitionX;
            
            // If partitionX is 0, nothing is on the left side for nums1. Use INT_MIN
            // If partitionX is m, nothing is on the right side for nums1. Use INT_MAX
            int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
            int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];
            
            // If partitionY is 0, nothing is on the left side for nums2. Use INT_MIN
            // If partitionY is n, nothing is on the right side for nums2. Use INT_MAX
            int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
            int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];
            
            // Check if correct partition is found
            if (maxLeftX <= minRightY && maxLeftY <= minRightX) {
                // If total number of elements is odd
                if ((m + n) % 2 == 1) {
                    return std::max(maxLeftX, maxLeftY);
                }
                // If total number of elements is even
                return (std::max(maxLeftX, maxLeftY) + std::min(minRightX, minRightY)) / 2.0;
            }
            else if (maxLeftX > minRightY) {
                // Too far right in nums1, move left
                high = partitionX - 1;
            }
            else {
                // Too far left in nums1, move right
                low = partitionX + 1;
            }
        }
        
        return 0.0; // Input arrays were not sorted or invalid
    }
};
