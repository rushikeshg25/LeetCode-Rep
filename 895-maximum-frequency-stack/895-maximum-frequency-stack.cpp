class FreqStack {


public:
    struct junk
    {
        auto operator()(vector<int>& lhs, vector<int>& rhs){ 
            
            if(lhs[0] == rhs[0]) {
                return lhs[1] < rhs[1];
            }
            return lhs[0] < rhs[0];
        }
    };

    priority_queue<vector<int>, vector<vector<int>>, junk> pq;
    unordered_map<int, int> freqMap;
    int i = 0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freqMap[val]++;
        pq.push({freqMap[val], i++, val});
    }
    
    int pop() {
        auto node = pq.top();
        pq.pop();
        freqMap[node[2]]--;
        return node[2];
    }
};