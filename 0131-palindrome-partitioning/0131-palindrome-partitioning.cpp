class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>subans;
        fn(ans,subans,0,s);
        return ans;
    }
    
    void fn(vector<vector<string>>&ans,vector<string>&subans,int i,string s){
        if(i==s.size()){
            ans.push_back(subans);
            return;
        }
        
        for(int ind=i;ind<s.size();ind++){
            if(is(s,i,ind)){
                subans.push_back(s.substr(i,ind-i+1));
                fn(ans,subans,ind+1,s);
                subans.pop_back();
            }
        }
    }
    
    bool is(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]) return false;
        }
        return true;
    }
};