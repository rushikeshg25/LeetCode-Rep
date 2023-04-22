class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
    vector<int>zero(n,0),one(n,0);
 
// zero array
if(s[0]=='0') zero[0]=1;
else
    zero[0]=0;
 
    for(int i=1; i<n; i++) {
 
        if(s[i]=='0') zero[i] = 1+ zero[i-1];
        else
        zero[i] = 0;
    }
 
    // lly, for one 
    if(s[0]=='1') one[0]=1;
 
    for(int i=1; i<n; i++) 
    {
        if(s[i]=='1') one[i] = 1+ one[i-1];
        else
        one[i]=0;
    }
 
 
    int cnt=0; // ans
 
    for(int i=0; i<n; i++) 
    {
        if(s[i]=='0')  // zero array
        {
            int idx = i - zero[i];
 
            if(idx>=0) 
            {
                if(one[idx]>=zero[i]) cnt++;
            }
        }
        else // one array 
        {
            int idx = i-one[i];
 
            if(idx>=0) 
            {
                if(zero[idx]>=one[i]) cnt++;
            }
        }
    }
        return cnt;
    }
};