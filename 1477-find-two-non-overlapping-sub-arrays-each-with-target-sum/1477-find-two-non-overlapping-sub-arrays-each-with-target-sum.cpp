class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int>best(n,INT_MAX);
        int i=0;
        int sum=0;
        int ans=INT_MAX;
        int minLEN=INT_MAX;

        for(int j=0;j<n;j++){
            sum+=arr[j];

            while(sum>target){
                sum-=arr[i];
                i++;
            }
            
            if(sum==target){
                int len=j-i+1;

                if(i>0 && best[i-1] !=INT_MAX){
                    ans=min(ans,len+best[i-1]);
                }

                minLEN=min(minLEN,len);
            }
            best[j]=minLEN;
        }

        return ans==INT_MAX?-1:ans;
    }
};