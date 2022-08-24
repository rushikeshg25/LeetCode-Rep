class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int b5=0,b10=0;
        for(auto i:bills){
            if(i==5){
                b5++;
            }
            else if(i==10){
                b10++;
                if(b5==0) return false;
                b5--;
            }
            else{
                if(b10>0 && b5>0){
                    b10--;
                    b5--;
                }
                else if(b10==0 && b5>=3){
                    b5-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};