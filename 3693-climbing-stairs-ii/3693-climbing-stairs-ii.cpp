class Solution {
private:
    int solve(int n,int i,vector<int>&costs,vector<int>&dp){
        if(i==n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int one=INT_MAX;
        int two=INT_MAX;
        int three=INT_MAX;
        if(i+1<=n){
            one=costs[i]+1+solve(n,i+1,costs,dp);
        }
        if(i+2<=n){
            two=costs[i+1]+4+solve(n,i+2,costs,dp);
        } 
        if(i+3<=n){
            three=costs[i+2]+9+solve(n,i+3,costs,dp);
        }

        return dp[i]=min(one,min(two,three));
    }
public:
    int climbStairs(int n, vector<int>& costs) {
        vector<int>dp(n+1,-1);
        return solve(n,0,costs,dp);
    }
};