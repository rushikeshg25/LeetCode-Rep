class Solution {
public:
    int trap(vector<int>& height) {
        int leftm=INT_MIN,rightm=INT_MIN;
        int l=0,r=height.size()-1;
        int ans=0;
        while(l<=r){
            leftm=max(leftm,height[l]);
            rightm=max(rightm,height[r]);
            if(leftm<=rightm)
            {
                ans+=leftm-height[l];
                l++;
            }
            else{
                ans+=rightm-height[r];
                r--;
            }
        }
        return ans;
    }
};