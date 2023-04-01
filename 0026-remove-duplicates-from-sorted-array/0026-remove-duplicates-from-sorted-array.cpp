class Solution {
public:
    int removeDuplicates(vector<int>& a) {
        int i=0;
        for(int j=1;j<a.size();j++){
            if(a[i]!=a[j])
            {
                i++;
                a[i]=a[j];
            }
        }
        return i+1;
    }
};