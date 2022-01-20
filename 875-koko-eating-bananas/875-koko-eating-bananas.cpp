class Solution {
public:
  bool is_enough(vector<int>& p, int h, int x){
    for(auto n: p)
      if( (h -= (n/x + (bool)(n%x))) < 0) return false; 
    return true;
  }
  
  int minEatingSpeed(vector<int>& piles, int h) { 
    int l = 1, r = *max_element(piles.begin(), piles.end()), m;
    
    while(l <= r)
      if (is_enough(piles, h, (m = (l + r)>>1))) r = m - 1; 
      else l = m + 1; 
    
    return l; 
  }
};