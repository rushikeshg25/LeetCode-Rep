class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0,l=0,r=0,n=s.size();
        for(int i=0;i<n;i++){
        if(s[i]=='(') l++;
        else r++;
        if(l==r) ans=max(ans,2*l);
        else if(r>l) {
            r=0;
            l=0;
        }
        }
        l=0,r=0;
        for(int i=n-1;i>=0;i--){
        if(s[i]=='(') l++;
        else r++;
        if(l==r) ans=max(ans,2*l);
        else if(l>r) {
            r=0;
            l=0;
        }
        }
        return ans;
    }
};