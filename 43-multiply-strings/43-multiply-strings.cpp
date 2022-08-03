class Solution {
public:
    string multiply(string a, string b) {
        if(a=="0" || b=="0") return "0";
        int n=a.size();
        int m=b.size();
        string ans(size(a)+size(b),'0');
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                int mul=(a[i]-'0')*(b[j]-'0');
                int sum=mul+(ans[i+j+1]-'0');
                ans[i+j+1] = sum%10 + '0';  
                ans[i+j] += sum/10; 
            }
        }
        if(ans[0] == '0') return ans.substr(1);
        return ans;
    }
};

