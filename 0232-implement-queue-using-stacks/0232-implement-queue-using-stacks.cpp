class MyQueue {
public:
    stack<int>st,pq;
    MyQueue() {
        
    }
    
    void push(int x) {
        st.push(x);
    }
    
    int pop() {
       while(!st.empty()){
           int t=st.top();
           st.pop();
           pq.push(t);
       }
        int d=pq.top();
        pq.pop();
        while(!pq.empty()){
            int t=pq.top();
            pq.pop();
            st.push(t);
        }
        return d;
    }
    
    int peek() {
          while(!st.empty()){
           int t=st.top();
              st.pop();
           pq.push(t);
       }
        int d=pq.top();
        while(!pq.empty()){
            int t=pq.top();
            pq.pop();
            st.push(t);
        }
        return d;
    }
    
    bool empty() {
        if(st.size()==0){
            return 1;
        }
        return 0;
    }
};