class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size(),m=goal.size();
        if(n!=m) return false;
        if(n==0) return true;
        for(int i=0;i<n;i++)
        {
            int j=0;
            
        while(j<m && s[(i+j)%n]==goal[j]) j++;
            if(j==n) return true;
            
        }
        return false;
    }
};