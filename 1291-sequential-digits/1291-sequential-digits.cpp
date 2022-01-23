class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;
        string digits = "123456789";
        
        for(int i=0; i<digits.size(); i++) {
            
            for(int j=i; j<digits.size(); j++) {
                int n = stoi(digits.substr(i, j-i+1));
                if ((n >= low) && (n <= high))
                    ans.push_back(n);
            }
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};