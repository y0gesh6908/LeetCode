class Solution {
public:
    vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        vector<int>prefix(nums.size()+1,0);
        vector<int>suffix(nums.size()+1,0);

        for(int i=1;i<=nums.size();i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }
        for(int i=nums.size()-1;i>=0;i--){
            suffix[i]=suffix[i+1]+nums[i];
        }

        vector<int>ans(nums.size(),0);

        for(int i=0;i<nums.size();i++){
            int left = nums[i]*i - prefix[i];

            int right = suffix[i+1] - (nums.size()-i-1)*nums[i];

            ans[i] = left + right;
        }

        return ans;

    }
};