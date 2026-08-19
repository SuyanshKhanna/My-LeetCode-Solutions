#include <vector>
#include <unordered_map>

class Solution {
public:
    int maxNumberOfFamilies(int n, std::vector<std::vector<int>>& reservedSeats) {
        int maxGroups = 0;
        std::unordered_map<int, int> rowToSeatsMask;
        
        // Step 1: Map each row to a bitmask representing reserved seats (1 to 10)
        for (const auto& seat : reservedSeats) {
            int row = seat[0];
            int col = seat[1];
            // Set the bit corresponding to the seat number (0-indexed)
            rowToSeatsMask[row] |= (1 << (col - 1));
        }
        
        // Define bitmasks for the three valid 4-seat configurations (0-indexed bits)
        // Left block: seats 2, 3, 4, 5  -> bits 1, 2, 3, 4
        int leftMask = (1 << 1) | (1 << 2) | (1 << 3) | (1 << 4);
        // Middle block: seats 4, 5, 6, 7 -> bits 3, 4, 5, 6
        int middleMask = (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6);
        // Right block: seats 6, 7, 8, 9 -> bits 5, 6, 7, 8
        int rightMask = (1 << 5) | (1 << 6) | (1 << 7) | (1 << 8);
        
        // Step 2: Process rows that contain at least one reservation
        for (const auto& [row, mask] : rowToSeatsMask) {
            bool leftFree = (mask & leftMask) == 0;
            bool rightFree = (mask & rightMask) == 0;
            bool middleFree = (mask & middleMask) == 0;
            
            if (leftFree && rightFree) {
                // Both left and right blocks are empty -> fits 2 families
                maxGroups += 2;
            } else if (leftFree || rightFree || middleFree) {
                // Only one of the three blocks is empty -> fits 1 family
                maxGroups += 1;
            }
            // If none match, 0 families can sit in this row
        }
        
        // Step 3: Add groups for completely empty rows (each fits exactly 2 families)
        int emptyRowsCount = n - rowToSeatsMask.size();
        maxGroups += emptyRowsCount * 2;
        
        return maxGroups;
    }
};
