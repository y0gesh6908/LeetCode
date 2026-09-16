class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int ans=nums[nums.size()-1]-nums[0];

        ans=min(ans,nums[nums.size()-1-3]-nums[0]);
        ans=min(ans,nums[nums.size()-1]-nums[3]);
        ans=min(ans,nums[nums.size()-1-2]-nums[1]);
        ans=min(ans,nums[nums.size()-1-1]-nums[2]);
        return ans;
    }
};