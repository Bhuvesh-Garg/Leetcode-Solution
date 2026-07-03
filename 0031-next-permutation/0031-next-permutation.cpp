class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index =-1;
        int i;
        int n=nums.size();
        for(i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(i=n-1;i>index;i--){
            if(nums[index]<nums[i]){
                int temp=nums[index];
                nums[index]=nums[i];
                nums[i]=temp;
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());

    }
};