class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0,i=0,j=people.size()-1,n=people.size();
        while(i<=j){
          if(limit>=people[i]+people[j]) i++;
          j--;
          ans++;
        }
        return ans;
    }
};