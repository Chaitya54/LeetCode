class MinStack {
    stack<long long> st;
    long long mini;
public:
    MinStack() {
        while(st.empty()==false)
            st.pop();
        int mini = INT_MAX;
    }
    
    void push(int val) {
        long long value = val;
        if(st.empty()){
            st.push(value);
            mini = value;
        }
        else{
            if(value>mini){
                st.push(value);
            }
            else{
                st.push(2*value - mini);
                mini = value;
            }
        }
    }
    
    void pop() {
        if(st.empty())
            return;
        else{
            if(st.top()<mini){
                mini = 2*mini - st.top();
                st.pop();
            }
            else{
                st.pop();
            }
        }
    }
    
    int top() {
        if(st.empty())
            return -1;
        else{
            if(st.top()<mini){
                return mini;
            }
            else{
                return st.top();
            }
        }
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */