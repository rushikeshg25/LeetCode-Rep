class StockSpanner {
public:
    stack<pair<int,int>>s; //span,days
    StockSpanner() {
        
    }
    
    int next(int price) {
        int cur=1;
        while(!s.empty() && s.top().first<=price)
        {
            cur+=s.top().second;
            s.pop();
        }
        s.push({price,cur});
        return cur;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */