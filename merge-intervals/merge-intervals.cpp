class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
       stack<vector<int>>s;
        sort(a.begin(),a.end());
        s.push(a[0]);
        int n=a.size();
        for(int i=1;i<n;i++)
        {
          vector<int>temp=s.top();
            if(temp[1]<a[i][0])
                s.push(a[i]);
            else if(temp[1]<a[i][1])
            {
               temp[1]=a[i][1];
                s.pop();
                s.push(temp);
            }
        }
        vector<vector<int>>ans;
        while(!s.empty())
        {
            vector<int>temp=s.top();
            ans.push_back(temp);
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};