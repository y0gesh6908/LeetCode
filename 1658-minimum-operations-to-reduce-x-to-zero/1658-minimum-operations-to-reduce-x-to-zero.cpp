class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        int n=nums.size();
        for(auto i:nums){
            sum+=i;
        }
        int target=sum-x;
        if(target<0){
            return -1;
        }
        int i=0;
        int j=0;
        int temp=0;
        int ans=-1;
        while(j<nums.size()){
            temp+=nums[j];
            while(temp>target){
                temp-=nums[i];
                i++;
            }
            if (temp == target) {
                ans = max(ans, j - i + 1);
            }
            j++;
        }
        
        if(ans== -1){
            return -1;
        }
        return n-ans;
    }
};