class Solution {
public:
    vector<int> findOriginalArray(vector<int>& A) {
        if (A.size() % 2) return {};
        map<int, int> m; // a frequency map
        for (int n : A) m[n]++;
        vector<int> ans;
        while (m.size()) {
            auto [n, cnt] = *m.begin();
            if (n == 0) {
                if (cnt % 2) return {}; // count of `0` is odd.
                for (int j = 0; j < cnt / 2; ++j) ans.push_back(0);
                m.erase(0);
            } else {
                if (m[2 * n] < cnt) return {}; // not enough `2n` available.
                m.erase(n);
                for (int j = 0; j < cnt; ++j) ans.push_back(n);
                m[2 * n] -= cnt;
                if (m[2 * n] == 0) m.erase(2 * n);
            }
        }
        return ans;
    }
};