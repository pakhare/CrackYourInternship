class MyQueue {
public:
    MyQueue() {
        
    }
    stack<int> st1, st2;
    void push(int x) {
        int n = st2.size();
        for(int i=0; i<n; i++){
            st1.push(st2.top());
            st2.pop();
        }
        st1.push(x);
        n = st1.size();
        for(int i=0; i<n; i++){
            st2.push(st1.top());
            st1.pop();
        }
    }
    
    int pop() {
        int x = st2.top();
        st2.pop();
        return x;
    }
    
    int peek() {
        return st2.top();
    }
    
    bool empty() {
        return st2.empty();
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
