class Solution {
public:
    void fn(vector<int>a, vector<vector<int>>&ans,vector<int>&sub,int k,int sum,int i,int cnt)
    {
        if(sum==0 && cnt==k) 
        {ans.push_back(sub);
         return ;
        }
        if(cnt>k || i>=9 || sum<0) return;
        
        fn(a,ans,sub,k,sum,i+1,cnt);
        sub.push_back(a[i]);
        fn(a,ans,sub,k,sum-a[i],i+1,cnt+1);
        sub.pop_back();
        
    }
    vector<vector<int>> combinationSum3(int k, int sum) {
        vector<int>a{1,2,3,4,5,6,7,8,9};
        vector<vector<int>>ans;
        vector<int>sub;
   
        fn(a,ans,sub,k,sum,0,0);
        return ans;
    }
};