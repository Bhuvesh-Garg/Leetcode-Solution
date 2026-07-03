class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0,j=0;
        while(i<nums.size()){
            
            if(nums[i]!=nums[j]&&i>=j){
                j++;
                nums[j]=nums[i];
                
            }
            i++;
            
        }
        return j+1;
    }
};