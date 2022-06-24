class Solution {
public:
    bool isPossible(vector<int>& target) {
        multiset<int> m;
        for(const int n: target) m.insert(n);
        auto cur = --m.end();
        while(*cur != 1) {
            int64_t sum = 0;
            for(const auto &v: m) sum += v;
            int64_t r = sum - *cur;
            if(r == 0 || *cur - r < 1 || ((*cur - r - 1) % r)+1 < 1) return false;
            int last = 1 + ((*cur - r - 1) % r);
            m.insert(last);
            m.erase(cur);
            cur = --m.end();
        }
        return true;
    }
};