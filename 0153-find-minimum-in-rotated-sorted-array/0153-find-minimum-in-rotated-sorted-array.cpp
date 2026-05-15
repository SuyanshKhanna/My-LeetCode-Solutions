class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size();
        int i=0;
        for( i=0; i+1<len; i++){
            if(nums[i]>nums[i+1])
                return nums[i+1];
        }
        
        return nums[0];
    }
};