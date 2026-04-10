class Solution {
public:
    bool rotateString(string s, string goal) {
        int lenS = s.size();
       // int lenG = goal.size();
       int t = 0;
        while(t<=lenS){
            char temp = s[0];
            for(int i=0; i+1<lenS; i++){
                s[i]=s[i+1];
            }
            s[lenS-1]=temp;
            if(s==goal) return true;
            t++;
        }
        
        return false;
    }
};