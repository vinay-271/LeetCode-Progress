class MyStack {
    queue<int> q1;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x); 
        int size = q1.size() - 1;
        
        while(size--){
            int push = q1.front();
            q1.push(push);
            q1.pop();
        } 
    }
    
    int pop() {
        int removed = q1.front();
        q1.pop();
        return removed;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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