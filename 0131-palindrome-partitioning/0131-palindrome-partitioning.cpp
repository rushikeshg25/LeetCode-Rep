class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>subans;
        fn( s,0,subans,ans);
        return ans;
    }
    bool isPalindrome(string a,int start,int end){
        while(start<=end){
            if(a[start++]!=a[end--]) return false;
        }
        return true;
    }
    void fn(string a,int i,vector<string>&subans,vector<vector<string>>&ans){
        if(i==a.size()){
            ans.push_back(subans);
            return;
        }
        for(int ind=i;ind<a.size();ind++){
            if(isPalindrome(a,i,ind)){
                subans.push_back(a.substr(i,ind-i+1));
                fn(a,ind+1,subans,ans);
                subans.pop_back();
            }
        }
    }
    
};