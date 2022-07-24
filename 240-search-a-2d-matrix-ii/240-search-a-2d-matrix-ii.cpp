class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int top = 0, right = matrix[0].size()-1;
        
        while( top < matrix.size() && right >= 0  ){
            if( matrix[top][right] > target ){
                right--; 
            }else if( matrix[top][right] < target ){
                top++;
            }else{
                return true;
            }
        }
        
        return false;
    }
};