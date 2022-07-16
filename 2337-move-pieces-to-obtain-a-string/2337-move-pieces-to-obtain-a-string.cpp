class Solution {
public:
    bool canChange(string start, string target) {
        int n=start.size();
        int i=0,j=0;
        // i start
        // j end
        while(i<=n && j<=n){
         
        while(i<=n && start[i]=='_')i++;
        while(j<=n && target[j]=='_')j++;
        
        if(start[i]!=target[j]) return false;
        
        if(start[i]=='L'){
            if(i<j) return false;
        }
        else{
            if(j<i) return false;
        }
        i++;
        j++;
        }
        return true;
    }
};