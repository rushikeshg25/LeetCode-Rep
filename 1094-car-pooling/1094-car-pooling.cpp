class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
    
        int stops[1001]={};
        for(int i=0;i<trips.size();i++)
        {
            stops[trips[i][1]]+=trips[i][0];
            stops[trips[i][2]]-=trips[i][0];
        }
       for (int i = 0; capacity >= 0 && i < 1001; ++i) capacity -= stops[i];
  return capacity >= 0;
    }
};