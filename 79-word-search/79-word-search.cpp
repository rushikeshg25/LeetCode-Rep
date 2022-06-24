class Solution {
public:
    bool helper(vector<vector<char>>&a,int i,int j,int m,int n, string word,int word_pos){
        if(word_pos==word.size()) return true;
        if(i<0 || i>=m || j<0 || j>=n || word[word_pos]!=a[i][j] || a[i][j]=='*') return false;
        a[i][j]='*';
        bool ans=helper(a,i+1,j,m,n,word,word_pos+1) || helper(a,i-1,j,m,n,word,word_pos+1) ||
            helper(a,i,j-1,m,n,word,word_pos+1) || helper(a,i,j+1,m,n,word,word_pos+1);
        a[i][j]=word[word_pos];
        return ans;
        
    }
    bool exist(vector<vector<char>>& a, string word) {
        int m=a.size();
        int n=a[0].size();
        int word_pos=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
            if(a[i][j]==word[0]) 
                if(helper(a,i,j,m,n,word,0)) return true;
                else continue;
            }
        }
        return false;
    }
};