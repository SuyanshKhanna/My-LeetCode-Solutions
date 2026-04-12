class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());   
        sort(t.begin(), t.end());
        int len = t.size();
        int i;
        for(i=0; i<len; i++){
            if(t[i]!= s[i])
                break;
        }   
        return t[i];
    }
};