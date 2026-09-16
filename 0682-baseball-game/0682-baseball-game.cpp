class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> S;
        for(auto x:operations){
            if(x=="C" && !S.empty()){
                S.pop();
            } 
            else if(x=="D"&& !S.empty()){
                S.push(2*S.top());
            }
            else if(x=="+"&& S.size()>1){
                int a=S.top();
                S.pop();
                int b=S.top();
                S.push(a);
                S.push( a +b);
            }
            else if(x != "C" && x != "D" && x!="+"){
                S.push(stoi(x));
            }
        }
        int result=0;
        while(!S.empty()){
            result+=S.top();
            S.pop();
        }
        return result;
    }
};