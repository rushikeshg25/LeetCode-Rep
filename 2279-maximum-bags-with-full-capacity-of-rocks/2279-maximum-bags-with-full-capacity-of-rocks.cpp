class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int left) {
        int count=0;
        vector<int>a;
        for(int i=0;i<rocks.size();i++)
        {
            a.push_back(capacity[i]-rocks[i]);
        }
        sort(a.begin(),a.end());
        int i;
        for( i=0;i<capacity.size() && left>=a[i];i++){
            left-=a[i];
        }
        return i;
    }
};