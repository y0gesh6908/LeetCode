class Solution {
int solve(vector<vector<int>>& grid,int i,int j,int sum,vector<vector<vector<int>>>&dp){
    if(i==grid.size()-1 && j==grid[0].size()-1){
        return sum^ grid[i][j];
    }
    if(dp[i][j][sum]!=-1){
        return dp[i][j][sum];
    }
    int right=INT_MAX;
    int down=INT_MAX;

    if(i+1<grid.size()){
        right=solve(grid,i+1,j,sum^grid[i][j],dp);
    }
    if(j+1<grid[0].size()){
        down=solve(grid,i,j+1,sum^grid[i][j],dp);
    }

    return dp[i][j][sum]=min(down,right);
}
public:
    int minCost(vector<vector<int>>& grid) {
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(1024,-1)));
        return solve(grid,0,0,0,dp);
    }
};