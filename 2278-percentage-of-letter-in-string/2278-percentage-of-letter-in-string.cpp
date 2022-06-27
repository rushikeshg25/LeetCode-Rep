class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt=0;
        for(auto i:s){
            if(i==letter) cnt++; 
        }
        return (cnt*100)/s.size();
    }
};