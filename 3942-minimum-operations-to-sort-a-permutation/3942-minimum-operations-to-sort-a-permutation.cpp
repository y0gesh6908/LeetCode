class Solution {
public:
    int minOperations(vector<int>& nums) {
        bool inc=true;
        bool dec=true;
        int n=nums.size();
        int idx=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                idx=i;
            }
            int next=(i+1)%n;

            if(nums[next]!= (nums[i]+1)%n){
                inc=false;
            }

            if(nums[next]!=(nums[i]-1+n)%n){
                dec=false;
            }
        }
        
        if(!inc && !dec){
            return -1;
        }
        
        if(inc){
            int mini=idx;

            mini=min(mini,1+(n-idx-1)+2);

            return mini;
        }
        else{
            int mini=idx+2;

            mini=min(mini,1+(n-1-idx));

            return mini;
        }

        return 0;
    }
};