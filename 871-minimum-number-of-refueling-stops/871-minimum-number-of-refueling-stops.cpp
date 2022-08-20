class Solution {
public:
   int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        int ret = 0, stationId = 0, range = startFuel;
        while (range < target) {
            while (stationId < stations.size() && stations[stationId][0] <= range) {
                pq.push(stations[stationId++][1]);
            }
            if (pq.empty()) return -1;
            range += pq.top();
            pq.pop();
            ++ret;
        }
        return ret;
    }
};