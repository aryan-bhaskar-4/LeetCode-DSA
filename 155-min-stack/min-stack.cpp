class MinStack {
    vector<int> vec;
public:
    MinStack() {
        int data;
    }
    
    void push(int val) {
        vec.push_back(val);
    }
    
    void pop() {
        vec.pop_back();
    }
    
    int top() {
        int n = vec.size();
        return vec[n-1];
    }
    
    int getMin() {
        int minNum = INT_MAX;
        int n = vec.size();

        for(int i=0;i<n;i++){
            minNum = min(minNum,vec[i]);
        }

        return minNum;
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