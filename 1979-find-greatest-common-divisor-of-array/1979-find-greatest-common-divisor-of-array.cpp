class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxi=0;
        int mini=10000;
        for(int i=0;i<nums.size();i++){
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        return gcd(mini,maxi);
    }
};