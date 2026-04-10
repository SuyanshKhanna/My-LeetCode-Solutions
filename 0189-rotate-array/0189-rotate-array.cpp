class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        if(k>len){
            int i=0;
            while(i<k){
                int temp = nums[len-1];
                for(int j=len-1; j-1>=0; j--){
                    nums[j]= nums[j-1];
                }
                nums[0]= temp;
                i++;
            }
        }
        if(k<len){
            vector<int> move(nums.end()-k, nums.end());
            for(int i=nums.size()-1; i-k>=0; i--){
                    nums[i]= nums[i-k];
            }
            copy(move.begin(), move.end(), nums.begin());
        }
    }
};