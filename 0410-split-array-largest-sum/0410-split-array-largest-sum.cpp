class Solution {
    private:
    int countSubarrays(const vector<int>& nums, int maxSumLimit) {
    int subarrays = 1;
    long long currentSum = 0;
    
    for (int num : nums) {
        if (currentSum + num <= maxSumLimit) {
            currentSum += num;
        } else {
            
            subarrays++;
            currentSum = num;
        }
    }
    return subarrays;
}
public:

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
    
    
    int high = accumulate(nums.begin(), nums.end(), 0);
    
    int ans = high;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (countSubarrays(nums, mid) <= k) {
            ans = mid;        
            high = mid - 1;   
        } else {
            low = mid + 1;    
        }
    }
    
    return ans; 
    }
};