class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        vector<int> ans;
        for(int i=0; i<len; i++){
            if(nums[i]==target)
                ans.push_back(i);
        }
        return ans;
    }
};