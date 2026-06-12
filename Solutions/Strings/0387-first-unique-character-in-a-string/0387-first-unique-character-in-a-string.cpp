class Solution {
public:
    // int firstUniqChar(string s) {
    //     int len = s.size();
    //     unordered_map<char, pair<int, int>> freq;
    //     for(int i=0; i<len; i++){
    //         freq[s[i]].first++;
    //         freq[s[i]].second = i;
    //     }
    //     int mini = INT_MAX;
    //     for(auto x: freq){
    //         if(x.second.first>1)
    //             continue;
    //         mini = min(mini, x.second.second);
    //     }
    //     if(mini == INT_MAX)
    //         return -1;
    //     return mini;
    // }

    int firstUniqChar(string s) {

        int count[26] = {0};
        int len = s.length();

        for (int i = 0; i < len; i++) {
            count[s[i] - 'a']++;
        }

        for (int i = 0; i < len; i++) {
            if (count[s[i] - 'a'] == 1) {
                return i;
            }
        }

        return -1;
    }
};