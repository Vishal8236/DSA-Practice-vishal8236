class MinStack {
public:
    stack<int> s1;
    stack<int> s2;
    
    void push(int val) {
        s1.push(val);
        if(s2.empty() || val <= getMin()) s2.push(val);
    }
    
    void pop() {
        if(s2.top() == s1.top()) s2.pop();
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }
};



problem link - https://leetcode.com/problems/min-stack/