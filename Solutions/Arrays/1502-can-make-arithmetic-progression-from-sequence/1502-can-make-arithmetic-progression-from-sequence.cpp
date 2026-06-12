class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int len = arr.size();
        for(int i=1; i+1<len; i++){
            if((arr[i-1]-arr[i]) != (arr[i]-arr[i+1]))
                return false;
        }
        return true;
    }
};