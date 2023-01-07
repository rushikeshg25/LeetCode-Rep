class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int start = gas.size()-1;
        int end = 0;
        int total_gas = gas[start] - cost[start];
        while (end < start) {
            if (total_gas >= 0) {
                total_gas += gas[end] - cost[end];
                end++;
            } else {
                start--;
                total_gas += gas[start] - cost[start];
            }
        }
        return (total_gas < 0) ? -1 : start;
    }
};
    