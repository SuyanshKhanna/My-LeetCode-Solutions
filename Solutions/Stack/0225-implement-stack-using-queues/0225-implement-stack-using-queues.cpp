class MyStack {
public:

            vector<int> queue;
            int size = 0;
    MyStack() {
        
        
    }
    
    void push(int x) {
        queue.push_back(x);
    }
    
    int pop() {
        size = queue.size();
        int pop = queue[size-1]; 
        queue.pop_back();
        return pop;
    }
    
    int top() {
        size = queue.size();
        return queue[size-1];

    }
    
    bool empty() {
        if(queue.size()==0) return true;
        else 
            return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */