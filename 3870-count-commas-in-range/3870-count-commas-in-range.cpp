class Solution {
public:
    int countCommas(int n) {
        int comma=0;
        int x = n; 
        while(x != 0){
            if(x / 1000 >0){
                comma++;
            }
            x /= 1000;
            
        }
        return comma * (n - 999);
    }
};