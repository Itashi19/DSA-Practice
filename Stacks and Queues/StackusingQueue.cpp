class MyStack {
public:
    /** Initialize your data structure here. */
      queue<int>q;
    MyStack() {
      
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++)
        {
            int value=q.front();
            q.pop();
            q.push(value);
        }
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int value=q.front();
        q.pop();
        return value;
    }
    
    /** Get the top element. */
    int top() {
        return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q.size()==0; 
    }
};
