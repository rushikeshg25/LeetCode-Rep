class Solution {
public:
    int maxArea(vector<int>& nums) {
       
{
int n=nums.size();
int l=0;
int r=n-1;
int ans=0;
while(l<r)
{
int w=r-l;
int h=min(nums[l],nums[r]);
int area=w*h;
ans=max(ans,area);
if(nums[l]<nums[r])l++;
else
r--;
}

   return ans;
}
    }
};
    