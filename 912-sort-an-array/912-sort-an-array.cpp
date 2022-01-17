class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> refmap(50000+50000+1,0); 
        for(int I : nums) refmap[I+50000]++;
        int idx = 0;
        for(int i = 0 ; i < refmap.size();i++){
            if(refmap[i]--){
                nums[idx++] = i-50000;
                i--;
            }
        }
        return nums;
    }
};