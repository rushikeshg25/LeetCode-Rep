class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        queue<int>q;
        unordered_set<int>visited;
        q.push(0);
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            visited.insert(temp);
            for(auto i:rooms[temp]){
                if(visited.find(i)==visited.end()){
                    
                    q.push(i);
                }
            }
            
        }
        return visited.size()==rooms.size();
    }
};