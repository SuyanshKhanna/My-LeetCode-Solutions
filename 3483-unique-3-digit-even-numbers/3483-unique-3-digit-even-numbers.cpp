#include <vector>
#include <unordered_set>

class Solution {
public:
    int totalNumbers(std::vector<int>& digits) {
        std::unordered_set<int> uniqueNumbers;
        int n = digits.size();
        
        // Loop through all triplets of unique indices (i, j, k)
        for (int i = 0; i < n; ++i) {
            // First digit (hundreds place) cannot be 0
            if (digits[i] == 0) continue;
            
            for (int j = 0; j < n; ++j) {
                if (i == j) continue; // Cannot reuse the same index
                
                for (int k = 0; k < n; ++k) {
                    if (k == i || k == j) continue; // Cannot reuse the same index
                    
                    // Last digit (units place) must be even
                    if (digits[k] % 2 == 0) {
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];
                        uniqueNumbers.insert(num);
                    }
                }
            }
        }
        
        return uniqueNumbers.size();
    }
};
