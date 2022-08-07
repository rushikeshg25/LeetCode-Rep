class Solution {
public:
    void fn(vector<char>&s,int i){
        if(i>=s.size()/2) return;
        swap(s[i],s[s.size()-i-1]);
        fn(s,i+1);
    }
    void reverseString(vector<char>& s) {
        fn(s,0);
        return;
    }
};