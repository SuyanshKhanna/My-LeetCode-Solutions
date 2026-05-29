class Solution {
public:
    int minElement(vector<int>& nums) {
        int len = nums.size();
        int minimum = INT_MAX;
        for(int i=0;i<len; i++){
            int t=nums[i];
            int tempmin=0;
            while(t!=0){
                tempmin += (t%10);
                t=t/10;
            }
            minimum=min(minimum, tempmin);
        }
        return minimum;
    }
};