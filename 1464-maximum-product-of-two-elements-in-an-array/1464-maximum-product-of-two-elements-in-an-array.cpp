class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        cout<<nums[nums.size()-1]<<", ";
        cout<<nums[nums.size()-2];
       // if(nums.size()==2) return ((nums[0]-1) * nums[1]-1);
        return ((nums[nums.size()-1]-1) * (nums[nums.size()-2]-1));
    }
};