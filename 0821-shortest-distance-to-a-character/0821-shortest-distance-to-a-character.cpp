class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int len = s.size();
        vector<int> answer(len, INT_MAX);
        vector<int> distIdx;

        for(int i=0; i<len; i++){
            if(s[i]== c){
                distIdx.push_back(i);
                
            }
        }
        
        for(int i=0; i<len ; i++){
            for(int j=0; j<distIdx.size(); j++){
                answer[i] = min(answer[i],abs(distIdx[j]-i));
            }
        }
        return answer;
    }
};