class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long nn=n;
        if(n<0) nn=-1*nn;
        while(nn){
            if(nn%2==0){
                x=x*x;
                nn/=2;
            }
            else{
            nn--;
            ans=ans*x;
            }
        }
        if(n<0) ans=1.0/ans;
        return ans;
    }
};