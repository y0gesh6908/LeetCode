class Solution {
 int solve(int k, vector<int>nums){
    int ans=0;
    for(auto x:nums){
        ans+=abs(x-k);
    }

    return ans;
}
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int ans=INT_MAX;

        int mid=i+(j-i)/2;
        if(nums.size()%2!=0){
            ans=min(ans,solve(nums[mid],nums));
            return ans;
        }
        
        ans=min(ans,solve(nums[mid+1],nums));

        return ans;
    }
};