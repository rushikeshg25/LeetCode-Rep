class Solution {
public:
    void fn(vector<string>&ans,int open,int close,int n,string subans){
        if(open==close && open==n){
            ans.push_back(subans);
            return;
        }
        if(open<n) fn(ans,open+1,close,n,subans+'(');
        if(close<open) fn(ans,open,close+1,n,subans+')');
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        fn(ans,0,0,n,"");
        return ans;
    }
};