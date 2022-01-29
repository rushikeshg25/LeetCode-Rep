class Solution {
public:
    void nextSmallerToLeft(vector<int>&heights,vector<int>& nsl){
       stack<int>s;
        for(int i=0; i<heights.size(); i++){
            while(!s.empty() && heights[s.top()] >= heights[i])
                s.pop();
            if(s.empty())
                nsl[i] = -1;
            else
                nsl[i] = s.top();
            
            s.push(i);
        }
    }
    
    void nextSmallerToRight(vector<int>&heights, vector<int>& nsr){
        stack<int>s;
        for(int i=heights.size()-1 ; i>=0; i--){
            while(!s.empty() && heights[s.top()] >= heights[i])
                s.pop();
            if(s.empty())
                nsr[i] = heights.size();
            else
                nsr[i] = s.top();
            
            s.push(i);
        }
    }
    
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>nsl(n);
        vector<int>nsr(n);

        int area = 0;
        nextSmallerToLeft(heights,nsl);
        nextSmallerToRight(heights,nsr);
       
        for(int i=0; i<n; i++){
            area = max((nsr[i] - nsl[i] - 1) * heights[i], area);
        }
        
        return area;
    }
};