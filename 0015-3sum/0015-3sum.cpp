#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<std::vector<int>> threeSum(std::vector<int>& nums) {
        std::vector<std::vector<int>> result;
        int n = nums.size();
        
        // Step 1: Sort the array to use the two-pointer approach efficiently
        std::sort(nums.begin(), nums.end());
        
        // Step 2: Iterate through the array fixing the first element
        for (int i = 0; i < n - 2; ++i) {
            // Optimization: If the current smallest number is > 0, 
            // no three numbers can sum up to 0. Stop early.
            if (nums[i] > 0) break;
            
            // Skip duplicate values for the first element to avoid duplicate triplets
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            
            // Initialize two pointers for the remaining two elements
            int left = i + 1;
            int right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];
                
                if (sum == 0) {
                    // Found a valid triplet
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicate values for the left pointer
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    // Skip duplicate values for the right pointer
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    
                    // Move both pointers inward for the next unique combination
                    left++;
                    right--;
                } 
                else if (sum < 0) {
                    // Sum is too small, move left pointer to increase the sum
                    left++;
                } 
                else {
                    // Sum is too large, move right pointer to decrease the sum
                    right--;
                }
            }
        }
        return result;
    }
};


