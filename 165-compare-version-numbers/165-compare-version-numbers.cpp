class Solution {
public:
    int compareVersion(string a, string b) {
        int n=a.size(),m=b.size();
        int num1=0,num2=0;
        int i=0,j=0;
        while(i<n || j<m){
            while(i<n && a[i]!='.'){
                num1=(a[i]-'0')+num1*10;
                i++;
            }
             while(j<m && b[j]!='.'){
                num2=(b[j]-'0')+num2*10;
                 j++;
            }
            cout<<num1<<" "<<num2<<endl;
            if(num1>num2)return 1;
            else if(num2>num1) return -1;
            num1=0;
            num2=0;
            i++;
            j++;
        }
        return 0;
    }
};