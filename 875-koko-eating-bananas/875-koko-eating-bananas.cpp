class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=1000000000;
        int time=0;
        //for(auto i:piles) r=max(r,i);
        while(l<r){
            int mid=(l+r)/2;
            time=0;
            for(auto i:piles){
                 time += (i + mid - 1) / mid;
            }
            if(time>h) l=mid+1;
            else r=mid;

        }
        return l;
    }
};