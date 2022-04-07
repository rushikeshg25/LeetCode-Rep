class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        for(auto i:stones) q.push(i);
       while(true)
        {
			if(q.size() == 0){ 
                return 0;   
            }
			
            if(q.size() == 1){ 
                return q.top();   
            }
        int x,y;
        x=q.top();
        q.pop();
        y=q.top();
        q.pop();
        if(x!=y) q.push(abs(x-y));
        }

        return 0;
        
    }
};