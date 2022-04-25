class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
int temp=0;
 for(int i=1;i<=n;i++)
 {
	 if(target[temp]==i)
	 {
	 ans.push_back("Push");
	 temp++;
	 }

	 else
	 {
		 ans.push_back("Push");
		 ans.push_back("Pop");
	 }
	 if(temp>=target.size())
		 return ans;

     }
    return ans;
}
};