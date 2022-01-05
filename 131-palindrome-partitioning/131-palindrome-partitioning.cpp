class Solution {
	vector<vector<string> > partitionRes;
	vector<string> oneRes;
public:
    	void findpartition(const string &s){
    		for(int i=1; i<=s.size(); i++){
    		    int l=0, r=i-1;
    			while( l <= r) {
    			    if(s[l] != s[r]) break;
    			    l++; r--;
    			}
    			if(l > r){
    				oneRes.push_back(s.substr(0 ,i));
    				if(i == s.size())partitionRes.push_back(oneRes);
    				findpartition(s.substr(i));
    				oneRes.pop_back();
    			}
    		}
    	}
    	vector<vector<string> > partition(string s) {
	    	findpartition(s);
		    return partitionRes;
    	}
};