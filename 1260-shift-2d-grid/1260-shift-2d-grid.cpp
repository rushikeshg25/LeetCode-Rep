class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<int>v;
        for(auto it: grid){
            for(auto i:it)v.push_back(i);
        }
        k%=v.size();
        reverse(v.begin(),v.begin()+v.size()-k);
        reverse(v.begin()+v.size()-k,v.end());
        reverse(v.begin(),v.end());
        int x=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                grid[i][j]=v[x++];
            }
        }
        return grid;
    }
};