class Solution {
public:
    char findTheDifference(string s, string t) {
        int x=0;
        for(auto i:t)
        {
          x=x^(int)(i-'a');
        }
        for(auto i:s)
        {
            x=x^(int)(i-'a');
        }
        char ans=x+'a';
        return ans;
    }
};