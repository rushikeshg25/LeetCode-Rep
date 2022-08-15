class Solution {
public:
    int romanToInt(string s) {
        map<char,int>hash{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n= s.length(),num=hash[s[n-1]];
        for(int i=n-2;i>=0;i--) 
        {
            if(hash[s[i]] >= hash[s[i+1]])
            {
                num += hash[s[i]];
            }
            else
            {
                num -= hash[s[i]];
            }
        }
        return num;
    }
};