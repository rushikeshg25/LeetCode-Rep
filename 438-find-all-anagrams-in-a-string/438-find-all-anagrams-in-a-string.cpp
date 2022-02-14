class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       int n=s.size();
       int m=p.size();
        if(m>n) return {};
       vector<int>freq(26,0);
       vector<int>win(26,0);
       vector<int>ans;
       for(auto i:p) freq[i-'a']++;
       int i=0;
       for(i=0;i<m;i++){
           win[s[i]-'a']++;
       }
        if(win==freq) ans.push_back(0);
        int j=0;
        while(i<n){
            win[s[j++]-'a']--;
            win[s[i++]-'a']++;
            if(win==freq) ans.push_back(j);
        }
        return ans;
    }
};