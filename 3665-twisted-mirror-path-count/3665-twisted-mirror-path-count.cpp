class Solution {
private:
    int solve(int i,int j,vector<vector<int>>& grid,vector<vector<vector<int>>>&dp,int dir){
        int mod = 1e9 + 7;
        if(i>=grid.size() || j>=grid[0].size()){
            return 0;
        }
        if(i==grid.size()-1 && j==grid[0].size()-1){
            return 1;
        }
        
        if(dp[i][j][dir]!=-1){
            return dp[i][j][dir];
        }
        int down=0,right=0;
        if(grid[i][j]==1){
            if(dir==0){
                down=solve(i+1,j,grid,dp,1);
            }
            else{
                right=solve(i,j+1,grid,dp,0);
            }
        }
        else{
            down=solve(i+1,j,grid,dp,1);
            right=solve(i,j+1,grid,dp,0);
        }

        return dp[i][j][dir]=(right+down)%mod;


    }
public:
    int uniquePaths(vector<vector<int>>& grid) {
        vector<vector<vector<int>>>dp(grid.size(),vector<vector<int>>(grid[0].size(),vector<int>(2,-1)));
        int mod = 1e9 + 7;
        return (solve(0, 1,grid, dp,0) + solve(1, 0, grid, dp,1)) % mod;
    }
};