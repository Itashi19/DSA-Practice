class MyQueue {
public:
    stack<int>in;
    stack<int>out;
    MyQueue() {
        
    }
    
    void push(int x) {
       in.push(x); 
    }
    
    int pop() {
        if(out.empty())
        {
            while(in.size())
            {
                out.push(in.top());
                in.pop();
            }
        }
        int x=out.top();
        out.pop();
        return x;
    }
    
    int peek() {
        if(out.empty())
        {
            while(in.size())
            {
                out.push(in.top());
                in.pop();
            }
        }
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
};