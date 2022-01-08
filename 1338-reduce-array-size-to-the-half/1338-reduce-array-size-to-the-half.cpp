class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int>mp;
        multiset<int, greater<int>> s;
		for(auto i : arr) mp[i]++;                  
        for(auto [num, freq] : mp) s.insert(freq);   
        for(int deleted{}, ans{}; auto freq : s) {   
            deleted += freq, ans++;
            if(deleted >= size(arr) / 2) return ans; 
        }
        return -1;  
    }
};