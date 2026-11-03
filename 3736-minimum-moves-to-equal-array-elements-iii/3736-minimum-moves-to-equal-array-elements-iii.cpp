class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi=0;
        int ans=0;
        for(auto x:nums){
            maxi=max(x,maxi);
        }
        for(auto c:nums){
            ans+=(maxi-c);
        }
        return ans;
    }
};