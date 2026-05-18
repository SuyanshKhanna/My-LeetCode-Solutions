class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        int i=0;
        int sum=0;
        while(i+1<len){
            sum += min(nums[i], nums[i+1]);
            i+=2;
        }
        return sum;
    }
};
