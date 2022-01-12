class Solution {
public:
      string convert(string s, int numRows) {
        string res="";
        if(numRows==1) return s;
        for(int i=0; i < numRows; i++){
            for(int j=0, k=i; k < s.size(); j++){
                res += s[k];
                k += ((i==0 || (j%2==0)) && (i!= numRows-1) )? 2*(numRows-i-1) : 2*i;
            }
        }
        return res;
    }
};