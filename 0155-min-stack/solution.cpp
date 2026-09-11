class MinStack {
private:
     stack<int>st , mini;
public:
    MinStack() {}
    
    void push(int x) {
        st.push(x);

        if(mini.empty() || x <= mini.top()){
            mini.push(x);
        }
    }
    void pop() {
        if(st.empty()) return ;
        else{
            int val = st.top();
            st.pop();
            // return ;

            if(!mini.empty() && val == mini.top()){
                mini.pop();
            }
        }
    }
    
    int top() {
       if(st.empty()) return -1;
       return st.top();
    }
    
    int getMin() {
       if(mini.empty()) return -1;
       return mini.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
