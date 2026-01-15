class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size();
        int R = i-1;
        if (digits[i - 1] == 9) {
            while (digits[R] == 9) {
                if (R == 0) {
                    digits.resize(i + 1);
                    i++;
                    break;
                } else {
                    R--;
                }
            }
            if(digits[R] == 9) digits[R] =1;
            else
                digits[R] += 1;
            for(R=R+1;R<i;R++){
                digits[R] =0;
            }
        } else {
            digits[digits.size() - 1] += 1;
        }
        return digits;
    }
};
