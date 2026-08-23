class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int left_sum = 0, right_sum = 0;
        int left_q = 0, right_q = 0;
        
        // Step 1: Count sums and question marks for both halves
        for (int i = 0; i < n / 2; ++i) {
            if (num[i] == '?') left_q++;
            else left_sum += num[i] - '0';
        }
        for (int i = n / 2; i < n; ++i) {
            if (num[i] == '?') right_q++;
            else right_sum += num[i] - '0';
        }
        
        // Step 2: Check if Bob can balance the game
        // Bob wins if: (left_sum - right_sum) == 4.5 * (right_q - left_q)
        // To avoid floating point issues, clear fractions by multiplying by 2:
        return 2 * (left_sum - right_sum) != 9 * (right_q - left_q);
    }
};

