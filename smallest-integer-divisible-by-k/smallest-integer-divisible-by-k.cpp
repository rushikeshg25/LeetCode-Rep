class Solution {
public:
    int smallestRepunitDivByK(int K) {
        for(int i=1,a=0;i<=K;i++)
            if((a=(a*10+1)%K)==0)
                return i;
return -1;
    }
};