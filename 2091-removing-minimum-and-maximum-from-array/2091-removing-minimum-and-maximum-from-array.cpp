#include <vector>
#include <algorithm>

class Solution {
public:
    int minimumDeletions(std::vector<int>& nums) {
        int n = nums.size();
        
        // Step 1: Find the indices of the minimum and maximum elements
        int minIdx = 0;
        int maxIdx = 0;
        for (int i = 1; i < n; ++i) {
            if (nums[i] < nums[minIdx]) minIdx = i;
            if (nums[i] > nums[maxIdx]) maxIdx = i;
        }
        
        // Step 2: Establish bounds so that left <= right
        int left = std::min(minIdx, maxIdx);
        int right = std::max(minIdx, maxIdx);
        
        // Step 3: Compute the cost for the 3 deletion options
        int opt1 = right + 1;              // Deletion purely from the front
        int opt2 = n - left;               // Deletion purely from the back
        int opt3 = (left + 1) + (n - right); // Deletion from both sides
        
        // Step 4: Return the optimal strategy
        return std::min({opt1, opt2, opt3});
    }
};
