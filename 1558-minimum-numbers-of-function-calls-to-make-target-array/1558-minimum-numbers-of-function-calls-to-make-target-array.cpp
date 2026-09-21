class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0;

        while(true){
            bool allzero=true;

            for(int i=0;i<nums.size();i++){
                if(nums[i]%2==1){
                    nums[i]--;
                    ans++;
                }

                if(nums[i]!=0){
                    allzero=false;
                }
            }
            
            if(allzero){
                break;
            }
            for(int i=0;i<nums.size();i++){
                nums[i]=nums[i]/2;
            }
            ans++;
        }
        return ans;
    }
};