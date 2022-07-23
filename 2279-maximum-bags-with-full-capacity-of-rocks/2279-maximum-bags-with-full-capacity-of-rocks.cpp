class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int count=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(int i=0;i<rocks.size();i++)
        {
            pq.push(capacity[i]-rocks[i]);
        }
        while(!pq.empty()){
            int s = pq.top();
            pq.pop();
            if(s <= additionalRocks){
                additionalRocks -= s;
                count++;
            }
        }
        return count;
    }
};