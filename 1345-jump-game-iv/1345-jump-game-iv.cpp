class Solution {
public:
    int minJumps(vector<int>& a) {
        map<int,vector<int>> mp;
        
        for(int i=0;i<a.size();i++)
            mp[a[i]].push_back(i);
        
        queue<int> q;
        q.push(0);
        vector<int> used(a.size());
        int ans=0;
        
        while(!q.empty()){
            int n=q.size();
            while(n--){
                int i=q.front();
                q.pop();
                
                if(i==a.size()-1)
                    return ans;
                
                used[i]=1;
                if(!used[i+1]&&a[i+1]!=a[i])
                    used[i+1]=1,q.push(i+1);
                if(i&&!used[i-1]&&a[i-1]!=a[i])
                    used[i-1]=1,q.push(i-1);
                for(int x : mp[a[i]]){
                    if(x^i&&!used[x])
                        used[x]=1,q.push(x);
                }
                mp[a[i]]={};
            }
            ans++;
        }
        return ans;
    }
};