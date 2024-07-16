class MyQueue {
public:
    stack<int> input;
    stack<int> output;
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(output.empty()==false){
            int y = output.top();
            output.pop();
            return y;
        }
        if(input.empty()){
            return -1;
        }
        while(input.empty()==false){
            output.push(input.top());
            input.pop();
        }
        int y = output.top();
        output.pop();
        return y;
    }
    
    int peek() {
        if(output.empty()==false){
            return output.top();
        }
        if(input.empty()){
            return -1;
        }
        while(input.empty()==false){
            output.push(input.top());
            input.pop();
        }
        return output.top();
    }
    
    bool empty() {
       return input.empty() && output.empty(); 
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