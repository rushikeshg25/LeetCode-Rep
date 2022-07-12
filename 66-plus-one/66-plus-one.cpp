class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        int i=a.size()-1;
        int c=0;
        for(;i>=0;i--){
            if(a[i]<9){ 
                a[i]++;
                return a;
            }
            a[i]=0;
        }
     vector<int>ans(a.size()+1,0);
        ans[0]=1;
        return ans;
    }
};