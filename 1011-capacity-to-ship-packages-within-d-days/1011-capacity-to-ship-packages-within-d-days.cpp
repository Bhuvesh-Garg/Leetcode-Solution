class Solution {
    private:
    
    int findDays(const std::vector<int>& weights, int capacity) {
        int days = 1;
        int currentLoad = 0;
        
        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                days++;
                currentLoad = weight; 
            } else {
                currentLoad += weight;
            }
        }
        return days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
       int low = *std::max_element(weights.begin(), weights.end());
        
        // The maximum possible capacity is the sum of all packages (shipping all in 1 day)
        int high = std::accumulate(weights.begin(), weights.end(), 0);
        
        int result = high;
        
        // Binary search for the minimum valid capacity
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            // If we can ship within the required days using 'mid' capacity
            if (findDays(weights, mid) <= days) {
                result = mid;     // 'mid' is a potential answer
                high = mid - 1;   // Try to look for a smaller/better capacity
            } else {
                low = mid + 1;    // 'mid' is too small, we need more capacity
            }
        }
        
        return result;
    } 
  
};