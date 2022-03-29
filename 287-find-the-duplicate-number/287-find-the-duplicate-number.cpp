class Solution {
public:
    int findDuplicate(vector<int>& a) {
      int slow=  a[0];
      int fast=a[0];
        slow=a[slow];
        fast=a[fast];
        fast=a[fast];
        while(fast!=slow)
        {
            slow=a[slow];
            fast=a[fast];
            fast=a[fast];
        }
        fast=a[0];
        while(fast!=slow)
        {
            slow=a[slow];
            fast=a[fast];
        }
        return slow;
    }
};