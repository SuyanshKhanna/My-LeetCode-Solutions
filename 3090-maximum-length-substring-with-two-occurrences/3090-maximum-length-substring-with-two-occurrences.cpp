class Solution {
public:
    int maximumLengthSubstring(std::string s) {
        int max_len = 0;
        int left = 0;
        std::vector<int> char_count(26, 0);

        for (int right = 0; right < s.length(); ++right) {
            char_count[s[right] - 'a']++;

            while (char_count[s[right] - 'a'] > 2) {
                char_count[s[left] - 'a']--;
                left++;
            }

            max_len = std::max(max_len, right - left + 1);
        }

        return max_len;
    }
};
