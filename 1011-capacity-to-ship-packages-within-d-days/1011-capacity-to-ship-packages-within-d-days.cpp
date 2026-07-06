class Solution {
    private:
    
    int findDays(vector<int>& weights, int capacity) {
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
       int low = *max_element(weights.begin(), weights.end());
        
        
        int high =accumulate(weights.begin(), weights.end(), 0);
        
        int result = high;
        
       
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
           
            if (findDays(weights, mid) <= days) {
                result = mid;     
                high = mid - 1;  
            } else {
                low = mid + 1;    
            }
        }
        
        return result;
    } 
  
};