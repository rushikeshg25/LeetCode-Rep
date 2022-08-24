class Solution {
public:
    long long max_power=pow(3,19);
    bool isPowerOfThree(int n) {
        if(n<=0) return 0;
        return max_power%n==0;
    }
};