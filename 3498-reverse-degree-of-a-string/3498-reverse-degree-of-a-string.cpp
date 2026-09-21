class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        int len = s.size(); 
        for(int i=0; i<len; i++){
            sum += ((i+1)*(26-(s[i]-'a') ));
        }
        return sum;
    }
};