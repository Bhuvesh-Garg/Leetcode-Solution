class Solution {
public:
    void merge(vector<int>& nums1, int n, vector<int>& nums2, int m) {
        int left=n-1;
        int right=m-1;
        int i=n+m-1;
        while(left>=0&&right>=0){
            if(nums1[left]>nums2[right]){
                nums1[i]=nums1[left];
                left--;
            }
            else{
                nums1[i]=nums2[right];
                right--;
            }
            i--;
        }
        while(left>=0){
            nums1[i]=nums1[left];
            left--;
            i--;
        }
        while(right>=0){
            nums1[i]=nums2[right];
            right--;
            i--;
        }
            
    }
};