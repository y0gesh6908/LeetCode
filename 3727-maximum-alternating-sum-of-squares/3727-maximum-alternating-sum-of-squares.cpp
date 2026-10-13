class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int>temp(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            temp[i]=abs(nums[i]-0);
        }

        sort(temp.begin(),temp.end());
        int i=0;
        int j=nums.size()-1;
        long long ans=0;
        int x=0;
        while(i<=j){
            if(x%2==0){
                ans+=(temp[j]*temp[j]);
                j--;
            }
            else{
                ans-=(temp[i]*temp[i]);
                i++;
            }
            x++;
        }

        return ans;
    }
};