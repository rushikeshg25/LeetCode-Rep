class Solution {
private:
   
    void fn(string digits,vector<string>pad,int i,string &subans,vector<string>&ans)
    {
        if(i>=digits.size()) {
        ans.push_back(subans);
        return;
        }
        int cur=digits[i]-'0';
        string a=pad[cur];
        for(int j=0;j<a.size();j++)
        {
         subans+=a[j];
         fn(digits,pad,i+1,subans,ans);
         subans.pop_back();
        }
        
        
    }
public:
    vector<string> letterCombinations(string digits) {
          if (digits.empty()) return {};
          const vector<string> pad = {
        "", "", "abc", "def", "ghi", "jkl",
        "mno", "pqrs", "tuv", "wxyz" };
        string subans="";
        vector<string>ans;
        fn(digits,pad,0,subans,ans);
        return ans;
    }
};