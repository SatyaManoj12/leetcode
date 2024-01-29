class MyQueue {
public:
stack<int>s;
stack<int>m;
    MyQueue() {
    }
    void push(int x) {
     while(!s.empty())
     { 
        m.push(s.top());
        s.pop();
     }
     s.push(x);
       while(!m.empty())
      { 
        s.push(m.top());
       m.pop();            
        }
     
    }
    int pop() {
        int t=s.top();
        s.pop();
        return t;
        
    }
    int peek() {
    //   if(!m.empty())
    //   {
    //       return m.top();
    //   }
    //   else
    //   {
    //       while(!s.top())
    //       {
    //           int top=s.top();
    //           s.pop();
    //           m.push(top);
    //       }
    //       return m.top();
    //   }
    return s.top();
    }
    
    bool empty() {
        if (s.empty())
        return true;
        else
        return false;
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