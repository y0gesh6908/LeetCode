class Solution {
private:
    int ans(int i){
        int sum=0;

        while(i>0){
            sum+=(i%10);

            i=i/10;
        }
        return sum;
    }
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(i==ans(nums[i])){
                return i;
            }
        }
        return -1;
    }
};