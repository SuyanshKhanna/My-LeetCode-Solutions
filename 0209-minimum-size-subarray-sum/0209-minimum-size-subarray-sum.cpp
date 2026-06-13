class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int len = nums.size();
        // int left=0, right=0;
        // int sum=nums[left];
        // int minLen=0;
        // while( right+1<len){
        //     if(sum < target ){
        //         right++;
        //         sum += nums[right];
        //         minLen++;
        //     }
        //     if(sum >= target){
        //         minLen = min(minLen, right - left +1);
        //         sum -= nums[left];
        //         left++;
        //         minLen--;

        //     }
        // }
        // return minLen;
        int left = 0, sum = 0;
        int minLen = INT_MAX;

        for (int right = 0; right < len; right++) {
            sum += nums[right];
            while (sum >= target) {
                minLen = min(minLen,right - left +1);
                sum -= nums[left];
                left++;
            }
        }

        return (minLen == INT_MAX) ? 0 : minLen;
    }
};