class Solution {
public:
int numPairsDivisibleBy60(vector<int>& time) {
  int res = 0;
  vector<int> m(60);
  for (auto t : time) {
    res += m[(60 - t % 60) % 60];
    ++m[t % 60];
  }
  return res;
}
};