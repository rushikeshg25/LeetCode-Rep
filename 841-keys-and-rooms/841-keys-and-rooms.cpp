//DFS by Rushikesh Ghotekar
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int>visited;
        fn(rooms,0,visited);
        return visited.size()==rooms.size();
    }
    
    void fn(vector<vector<int>>rooms,int i,unordered_set<int>&visited){
        visited.insert(i);
        for(auto temp:rooms[i]){
            if(visited.find(temp)==visited.end())
                fn(rooms,temp,visited);
        }
    }
};