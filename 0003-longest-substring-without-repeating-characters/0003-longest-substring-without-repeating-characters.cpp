class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.size();
        if(len==0)
            return 0;
        int l = 0, r = 0;
        int maxi = INT_MIN;
        unordered_map<char, int> freq;
        for ( r = 0; r < len; r++) {
            freq[s[r]]++;
            while (freq[s[r]] > 1) {
                freq[s[l]]--;
                l++;
            }
            maxi = max(maxi, r - l + 1);
        }
        return maxi;
    }
};