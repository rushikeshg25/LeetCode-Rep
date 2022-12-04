//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        if(str1.size()!=str2.size()) return false;
        vector<int>a(26,0),b(26,0);
        for(auto i:str1) a[i-'a']++;
        for(auto i:str2) b[i-'a']++;
        int cnt=0;
        for(int i=0;i<26;i++){
            cnt+=abs(a[i]-b[i]);
        }
        return (cnt<=2*k);
        
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}
// } Driver Code Ends