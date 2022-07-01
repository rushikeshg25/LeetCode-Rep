class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<int> buckets(1001, -1);
        int space_remaining_boxes = truckSize;
        int units_loaded = 0;
        for (int i = 0; i < boxTypes.size(); ++i) {
            if (buckets[ boxTypes[i][1] ] == -1) {
                buckets[ boxTypes[i][1] ] = boxTypes[i][0];
            } else { 
                buckets[ boxTypes[i][1] ] += boxTypes[i][0];
            }
        
        }
        
        for (int i = 1000; i >= 0; --i) {
            if (buckets[i] == -1) continue;
            
            if (buckets[i] > space_remaining_boxes) { 
                units_loaded += space_remaining_boxes*i;
                return units_loaded;
            } else {
                units_loaded += buckets[i]*i; 
                space_remaining_boxes -= buckets[i]; 
            }
            
        }
        return units_loaded;
    }
};