class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        
        int sum = accumulate(nums.begin(), nums.end(),0);
        
        int start  = 0, end = sum;
        
        while(start < end){
            int mid = start + (end - start)/2;
            
            if(solve(nums,m,mid)){
                end = mid;
            }else start = mid +1;
            
        }
        return start;
    }
    
    bool solve(vector<int>& nums, int m, int key){
        int sum = 0;
        for(auto it:nums){
            sum+= it;
            if(sum > key){
                sum = it;
                m--;
            }
            if(m==0 || sum>key) return false;
        }
        return true;
    }
    
};