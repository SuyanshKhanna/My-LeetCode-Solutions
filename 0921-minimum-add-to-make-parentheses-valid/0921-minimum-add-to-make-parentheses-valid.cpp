class Solution {
public:
    int minAddToMakeValid(string s) {
        int open_brackets = 0;
        int insertions_needed = 0;

        for (char ch : s) {
            if (ch == '(') {
                open_brackets++;
            } else { // ch == ')'
                if (open_brackets > 0) {
                    open_brackets--; // Matched with an existing opening parenthesis
                } else {
                    insertions_needed++; // Unmatched closing parenthesis needs an opening one
                }
            }
        }

        // Total insertions = unmatched closing ones + unmatched opening ones left over
        return insertions_needed + open_brackets;
    }
};