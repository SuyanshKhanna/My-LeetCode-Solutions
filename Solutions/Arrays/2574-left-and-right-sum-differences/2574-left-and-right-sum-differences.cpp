class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        int len=nums.size();
        for(auto x:nums){
            sum += x;
        }
        vector<int> answer(len);
        int leftsum =0;
        for(int i=0; i<len; i++){
            leftsum += nums[i];
            answer[i]=abs((leftsum - (sum-leftsum+nums[i])));
        }
        return answer;
    }
};