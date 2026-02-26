class Solution {
public:
    bool isPowerOfThree(int n) {
        //if(n==1) return true;
    //    if(n>3|| n==1){
    //        return isPowerOfThree(n/3);
    //    } 
    //    else if(n != 3 && n >= 0 || n<0){
    //         return false;
    //    }
    // return true;
    // }
    
    if(n == 1) return true;          // STOP SUCCESS
    if(n <= 0 || n % 3 != 0) return false;  // STOP FAILURE
    return isPowerOfThree(n / 3);    // RECURSE
}
};