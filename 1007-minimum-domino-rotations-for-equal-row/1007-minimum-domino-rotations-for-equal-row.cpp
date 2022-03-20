class Solution {
public:
    int check(vector<int>& a, vector<int>& b){
        unordered_map<int,int> mp;
        for(auto it:a)
            mp[it]++;
        
        int maxcnt=0;
        int val=a[0];
        for(auto it:mp){
            int currcnt=it.second;
            if(maxcnt<currcnt){
                val=it.first;
                maxcnt=currcnt;
            }
        }
        vector<int>idx;
        for(int i=0;i<a.size();++i){
            if(val!=a[i]){
                idx.push_back(i);
            }
        }
        
        for(auto it:idx){
            if(b[it]!=val) return -1;
        }
        
        return idx.size();
        
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int a=check(tops,bottoms);
        int b=check(bottoms,tops);
        
        if(a==-1 and b==-1){
            return -1;
        }
        else if(a==-1) return b;
             else if(b==-1) return a;
                 
        return min(a,b);
    }
};