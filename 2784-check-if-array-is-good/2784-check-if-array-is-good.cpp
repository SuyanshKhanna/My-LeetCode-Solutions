class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        unordered_map<int, int> freq;
        int maximum =0;
        for( auto x : nums){
            maximum = max(maximum, x);
            freq[x]++;
        }
        int freqS=freq.size();
        for(auto x : freq){
            if(x.first != maximum && x.second !=1)
                return false;
        }
        if(freq[maximum]==2 && len == maximum+1)
            return true;
        return false;
    }
};