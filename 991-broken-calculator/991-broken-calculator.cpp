class Solution {
public:
    int brokenCalc(int start, int target) {
        if(target<start) return start-target;
        if(target==start) return 0;
        
        int ans=0;
        
            
        
        while(target>start){
            if(target%2!=0) target++;
            else target/=2;
            ans++;
        }
        return ans+start-target;
    }
};