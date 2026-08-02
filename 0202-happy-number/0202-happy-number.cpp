class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        int x = n;
        int a = n;
        int sum = 0;
        while(x != 1){
            while(a>0){
                sum +=(a%10)*(a%10);
                a/= 10; 
            }
            if( set.contains(sum)){
                return false;
            } else{
                set.insert(sum);
            }
            x = sum;
            a = x;
            sum=0;

        }
        return true;
    }
};