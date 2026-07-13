class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int Lmultiply = 1;
        int Rmultiply = 1;
        int len = nums.size();
        vector<int> answer(len, 1);
        for(int i=0; i<len; i++){
            answer[i]=Lmultiply;
            Lmultiply *=nums[i];
        }
        for(int i=len-1; i>=0; i--){
            answer[i]*=Rmultiply;
            Rmultiply *=nums[i];
        }
        return answer;
    }

};