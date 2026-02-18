class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int len = tokens.size();
        stack<int> stack;
        for(int i=0; i<len; i++){
            if(tokens[i]=="+"){
                int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int c = a+b;
                stack.push(c);
            }
            else if(tokens[i]=="-"){
                 int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int c = b-a;
                stack.push(c);
            }
            else if(tokens[i]=="*"){
                 int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int c = a*b;
                stack.push(c);
            }
            else if(tokens[i]=="/"){
                 int a = stack.top();
                stack.pop();
                int b = stack.top();
                stack.pop();
                int c = b/a;
                stack.push(c);
            }

            else{
                stack.push(stoi(tokens[i]));
            }
        }
        return stack.top();
    }
};