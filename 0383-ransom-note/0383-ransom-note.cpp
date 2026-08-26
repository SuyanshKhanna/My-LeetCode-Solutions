class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_multiset<char> note;
        for(auto x : magazine){
            note.insert(x);
        }
        for(auto x : ransomNote){
            if(note.contains(x)){
                auto it = note.find(x);
                cout<<x<<endl;
                note.erase(it);
            }
            else{
                return false;
            }
        }
        return true;
    }
};