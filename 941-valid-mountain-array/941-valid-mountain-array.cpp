class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        while(i<n-1 && arr[i]<arr[i+1]) i++;
        if(i==0 || i==n-1) return false;
        while(i<n-1 && arr[i]>arr[i+1]) i++;
        
        if(i==n-1) return true;
        return false;
    }
};