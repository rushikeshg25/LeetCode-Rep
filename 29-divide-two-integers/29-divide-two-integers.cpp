class Solution {
public:
      int divide(long long dividend, long long divisor) {
        if(dividend<0 && divisor<0){
           dividend*=-1;
           divisor*=-1;
       }
       long long ans = ceil(dividend/divisor);
       if(ans>2147483647)return 2147483647;
      
       return  ceil(dividend/divisor);
    }
};