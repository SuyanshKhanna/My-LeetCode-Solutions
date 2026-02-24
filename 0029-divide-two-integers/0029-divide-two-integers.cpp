class Solution {
public:
    int divide(int dividend, int divisor) {
    if (dividend == INT_MIN && divisor == -1)
        return INT_MAX;  // overflow case

    // Make both numbers negative
    int negatives = 2;

    if (dividend > 0) {
        dividend = -dividend;
        negatives--;
    }

    if (divisor > 0) {
        divisor = -divisor;
        negatives--;
    }

    if(divisor == 1 || divisor ==-1){
         return negatives == 1 ? dividend : -dividend;
    }
    int quotient = 0;

    while (dividend <= divisor) {
        dividend -= divisor;
        quotient--;
    }

    return negatives == 1 ? quotient : -quotient;
}
};