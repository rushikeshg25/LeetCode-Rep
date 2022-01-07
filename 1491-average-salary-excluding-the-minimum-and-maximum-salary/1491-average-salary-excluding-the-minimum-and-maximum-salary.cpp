class Solution {
public:
    double average(vector<int>& salary) {
        int mi=INT_MAX,mx=INT_MIN;
        double sum=0;
        for(auto i:salary)
        {
            sum+=(double)i;
            mi=min(mi,i);
            mx=max(mx,i);
        }
        int n=salary.size();
        return ((sum-mi-mx)/(n-2));
    }
};