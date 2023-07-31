class MyStack {
public:
    MyStack() {
        
    }
    queue<int> in;
    void push(int x) {
        in.push(x);
        
        for(int i = 0; i<in.size()-1; i++)
            in.push(in.front()), in.pop();
    }
    
    int pop() {
        int x = top();
        in.pop();
        return x;
    }
    
    int top(){
        return in.front();
    }
    
    bool empty() {
        return in.empty();
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
