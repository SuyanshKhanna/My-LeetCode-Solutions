class MyQueue {
public:
    queue<int> q;

    MyQueue() {
        
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        int poped = q.front();
        q.pop();
        return poped;
    }
    
    int peek() {
        return q.front();
    }
    
    bool empty() {
        if(q.size()==0) return true;
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