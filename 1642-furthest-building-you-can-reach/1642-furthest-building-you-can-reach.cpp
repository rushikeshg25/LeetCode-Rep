class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int n=heights.size();
        priority_queue<int>q;
        for(int i=0;i<n-1;i++){
         int d=heights[i+1]-heights[i];
            if(d>0){
             q.push(-d);
            }
            if(q.size()>ladders){
                bricks+=q.top();
                q.pop();
            }
            if(bricks<0) return i;
        }
        return n-1;
    }
};