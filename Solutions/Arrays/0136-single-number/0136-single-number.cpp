class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int len = nums.size();
        // int i=0;
        // while(i+1<len){
        //     if(nums[i] != nums[i+1]) {
        //         //return nums[i];
        //         break;
        //     }
        //     else
        //         i = i+2;
        // }
        // return nums[i];

        // complex as we sort it therefor its nlogn
        int ans=0;
        int len=nums.size();
        for(auto i :nums)
            ans = ans^i;
        return ans;
    }
};