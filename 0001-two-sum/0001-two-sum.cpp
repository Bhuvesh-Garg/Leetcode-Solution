class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {int i,n=nums.size();
        map<int,int> mapp;
        for(i=0;i<n;i++){
            int num=nums[i];
            int moreNeeded=target-num;
            if(mapp.find(moreNeeded)!=mapp.end())return {mapp[moreNeeded],i};
            mapp[num]=i;
        }
        return{-1,-1};
    }
};