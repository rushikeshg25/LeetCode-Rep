class Solution {
public:
    string largestOddNumber(string num) {
        int i=num.size()-1;
        for(i=num.size()-1;i>=0;i--){
            if((num[i]-'0')%2!=0){
            return num.substr(0,i+1); 
            }
        }
        return "";
    }
};