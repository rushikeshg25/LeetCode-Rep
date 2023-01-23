class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int in[1001]={0};
        int out[1001]={0};
        for ( auto x : trust){
            out[x[1]]++;
            in[x[0]]++;
        }
        for ( int i =1; i <= N ; i ++ ) {
            if ( in[i] == 0 && out[i] == N-1)
                return i;
        }
        return -1;
    }
};