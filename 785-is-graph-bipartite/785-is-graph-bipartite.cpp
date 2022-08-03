class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size(),-1);
        for(int i=0;i<graph.size();i++){
            if(color[i]==-1)
               if(!fn(graph,color,i)) return false;
        }
        return true;
    }
    
    bool fn(vector<vector<int>>graph,vector<int>&color,int temp){
        if(color[temp]==-1) color[temp]=1;
        
        for(int i:graph[temp]){
            if(color[i]==-1){
                color[i]=1-color[temp];
                if(!fn(graph,color,i))return false;
            }
            else if(color[i]==color[temp])
            {
                return false;
            }
        }
        return true;
    }
};