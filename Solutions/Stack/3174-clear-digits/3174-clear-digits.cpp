class Solution {
public:
    string clearDigits(string s) {
        int lem = s.size();
        string result;
        for(int i=0; i<lem; i++){
            if(isdigit(s[i]))
                result.pop_back();
            else{
                result.push_back(s[i]);
            }
        }
        return result;
    }
};