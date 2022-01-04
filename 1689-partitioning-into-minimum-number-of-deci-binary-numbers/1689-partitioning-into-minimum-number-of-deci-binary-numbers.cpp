class Solution {
public:
    int minPartitions(string a) {
       return *max_element(a.begin(),a.end())-'0';
    }
};