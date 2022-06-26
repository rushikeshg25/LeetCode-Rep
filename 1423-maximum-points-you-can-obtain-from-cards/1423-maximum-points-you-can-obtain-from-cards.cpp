class Solution {
public:
   int maxScore(vector<int>& A, int k) {
    int n = A.size();
    int window = accumulate(A.begin(), A.begin() + k, 0);
    int res = window;
    while(k) {
        window -= A[--k] - A[--n];
        if(res < window) res = window;
    }
    return res;
}
};