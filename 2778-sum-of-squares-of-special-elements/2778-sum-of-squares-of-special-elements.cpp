class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int sum=0;
        int len = nums.size();
        for(int i=0; i < len ; i++){
            if(len%(i+1)==0){
                sum += nums[i]*nums[i];
            }
        }
        return sum;

    }
};