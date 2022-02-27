class Solution {
public:
    long long fn(vector<int>times,long long sec){
        long long ans=0;
        for(auto i:times) ans+=(sec/i);
        return ans;
    }
    long long minimumTime(vector<int>& times, int totalTrips) {
        long long low=0,high=1e14;
        long long ans=high;
        while(low<=high){
            long long mid=low+(high-low)/2;
            if(fn(times,mid)>=totalTrips){
                ans=mid;
                high=mid-1;
                
            }
            else
                low=mid+1;
        }
        return ans;
    }
};
// low time                                    mid                                      high time
//Rushikesh