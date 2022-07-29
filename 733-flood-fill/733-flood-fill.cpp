class Solution {
public:
    int d[5]={0,-1,0,1,0};
    void fn(vector<vector<int>>& image, int i, int j, int color,int cur){
        if(i>=image.size() || i<0 || j<0 || j>=image[0].size() || image[i][j]==color || image[i][j]!=cur) return ;
        image[i][j]=color;
        fn(image,i-1,j,color,cur);
        fn(image,i+1,j,color,cur);
        fn(image,i,j-1,color,cur);
        fn(image,i,j+1,color,cur);
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int cur=image[sr][sc];
        fn(image,sr,sc,color,cur);
        return image;
    }
};