class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp;
        fn(n,ans,temp,0,0);
        return ans;
    }
    void fn(int total,vector<string>&ans,string temp,int open,int close){
        if(open==total && close==total){
            ans.push_back(temp);
            return;
        }
        

        if(open<total) fn(total,ans,temp+'(',open+1,close);
        if(close<open) fn(total,ans,temp+')',open,close+1);
    }
};