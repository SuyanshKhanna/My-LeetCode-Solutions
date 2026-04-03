class MyQueue {
public:
    vector<int> stack;
    int size=0;
    //bool duplicate=false;
    MyQueue() { }
    void push(int x) {
        stack.push_back(x);
    }
    
    int pop() {
        
        size = stack.size();
        int pop = stack[0];
        for(int i=0; i+1<size; i++){
            stack[i] = stack[i+1];
        }
        stack.pop_back();
        
        return pop;

    }
    
    int peek() {
        return stack[0]; 
    }
    
    bool empty() {
        if(stack.size()==0) return true;
        else
            return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */