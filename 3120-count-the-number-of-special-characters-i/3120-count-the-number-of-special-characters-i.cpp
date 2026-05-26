class Solution {
public:
    int numberOfSpecialChars(string word) {
        /* sort(nums.begin(), nums.end());
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
        return false;*/
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