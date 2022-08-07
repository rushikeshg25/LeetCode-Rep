class Solution {
public:
    void fn(vector<char>&s,int l,int r){
        if(l>=r)return;
        swap(s[l],s[r]);
        fn(s,l+1,r-1);
    }
    void reverseString(vector<char>& s) {
        fn(s,0,s.size()-1);
        return;
    }
};