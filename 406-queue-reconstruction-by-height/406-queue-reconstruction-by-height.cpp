class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        const int n = people.size();
        vector<vector<int>> ret;
        sort(people.begin(), people.end());
        unordered_map<int, int> cnt;
        for(auto x:people)cnt[x[0]]++;
        for(int i=n-1;i>=0;--i)
        {
            auto this_one = people[i];
            auto h = this_one[0], v= this_one[1];
            ret.insert(ret.begin()+(v-cnt[h]+1) , this_one);
            cnt[h]-- ;
        }
        return ret;
    }
    };