class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        int stSize=0;
        //int len = s.size();
        for(auto i:s){
            st.push(i);
            stSize++;
            if(i>=48 && i<=57){
                //cout<<i<<endl;
                cout<<st.top()<<endl;
                st.pop();
                cout<<st.top()<<endl;
                st.pop();
                stSize-=2;
            }
        }
        string result(stSize, ' ');
        int t=stSize-1;
        while(!st.empty()){
            result[t]=st.top();
            t--;
            st.pop();
        }
        return result;
    }
};