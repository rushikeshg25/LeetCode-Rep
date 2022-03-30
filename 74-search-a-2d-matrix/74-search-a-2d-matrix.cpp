class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int k) {
        int n=a.size();
        if(n==0) return false;
        int m=a[0].size();
        int low=0;
        int high=(n*m)-1;
        int mid;
        while(low<=high)
        {
            mid=(high+low)/2;
            if(a[mid/m][mid%m]==k)
                return true;
            else if(a[mid/m][mid%m]>k)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return false;
    }
};