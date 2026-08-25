#include <vector>
#include <unordered_set>

class Solution {
public:
    int missingMultiple(std::vector<int>& nums, int k) {
        // Step 1: Insert all array elements into a hash set for O(1) lookups
        std::unordered_set<int> elements(nums.begin(), nums.end());
        
        // Step 2: Iterate through multiples of k starting from 1 * k
        int multiple = k;
        while (elements.count(multiple)) {
            multiple += k;
        }
        
        // Step 3: Return the first multiple not found in the set
        return multiple;
    }
};
