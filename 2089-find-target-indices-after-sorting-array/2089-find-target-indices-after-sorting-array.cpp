class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int cnt=0;
        int anscnt=0;
        vector<int>ans;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                anscnt++;
            }
            else if(nums[i]>target){
                cnt++;
            }
        }
        while(anscnt--){
            ans.push_back(n-cnt);
            cnt++;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};