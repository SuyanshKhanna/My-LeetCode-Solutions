class Solution {
public:
    int numberOfSpecialChars(string word) {
        int len = word.size();
        int special=0;
        unordered_map<char,int> count;
        for(auto x : word){
            if(!count.contains(x))
                count[x]++;
        }
        for(auto x:count ){
            if( static_cast<int>(x.first) <=123 && static_cast<int>(x.first) >=96){
                if(count.contains(x.first)&&count.contains(toupper(x.first)))
                    special++;
            }
        }
        return special;
    }
};