class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int total=neededTime[0];
        int maxi=total;
        int i=1;
        int ans=0;
        while(i<colors.size()){
            if(colors[i]==colors[i-1]){
                total+=neededTime[i];
                maxi=max(maxi,neededTime[i]);
            }
            else{
                ans+=total-maxi;
                total=neededTime[i];
                maxi=total;

            }
            i++;
        }
        ans+=total-maxi;
        return ans;
        
    }
};