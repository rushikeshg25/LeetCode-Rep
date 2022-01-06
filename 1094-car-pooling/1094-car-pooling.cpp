class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
      vector<pair<int,int>>p;   //a/d , passengers
       for(int i=0;i<trips.size();i++)
       {
           p.push_back({trips[i][1],trips[i][0]});
           p.push_back({trips[i][2],-trips[i][0]});
       }
      int cur=0;
        sort(begin(p),end(p));
        for(auto i:p)
        {
           cur+=i.second;
            if(cur>capacity) return false;
        }
        return true;
    }
};