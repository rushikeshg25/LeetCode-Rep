class Solution {
public:
    string addBinary(string a, string b) {
       string ans="";
       int x=a.size()-1;
        int y=b.size()-1;
        int c=0;
        while(x>=0 || y>=0 || c==1)
        {
            if(x>=0)
                c+=a[x]-'0';
            if(y>=0)
                c+=b[y]-'0';
            ans=(char)(c%2+'0') +ans;
            c=c/2;
            x--,y--;
        }
        return ans;
    }
};