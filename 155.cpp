#define se second
#define fi first

class MinStack {
public:
    /** initialize your data structure here. */
     stack<pair<int,int>> s;
    MinStack() {
     ;
        
    }
    
    void push(int x) {
        if(!s.empty())
        s.push(make_pair(x,min(x,s.top().se)));
        else
        {
            s.push(make_pair(x,x));
        }

    }
    
    void pop() {
        if(!s.empty())
        s.pop();
    }
    
    int top() {
        if(!s.empty())
        return s.top().fi;
        return 0;
    }
    
    int getMin() {
        if(!s.empty())
    return s.top().se;
        return 0;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
