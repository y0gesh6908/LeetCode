class Solution {
private:
    bool solve(vector<vector<char>>& grid,int i,int j,int cnt,vector<vector<vector<int>>>&dp){
        int n=grid.size();
        int m=grid[0].size();
        if(grid[i][j]=='('){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt<0){
            return false;
        }
        if(i==n-1 && j==m-1 && cnt==0 ){
            return true;
        }
        if(cnt > (n-i) + (m-j) - 1){
            return false;
        }
        if(dp[i][j][cnt]!=-1){
            return dp[i][j][cnt];
        }
        bool right=false;
        bool down=false;

        if(i+1<n){
            down=solve(grid,i+1,j,cnt,dp);
        }
        if(j+1<m){
            right=solve(grid,i,j+1,cnt,dp);
        }

        return dp[i][j][cnt]=right|| down;
    }
    
public:
    bool hasValidPath(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        if(grid[0][0]==')' || grid[n-1][m-1]=='('){
            return false;
        }
        vector<vector<vector<int>>> dp(
            n,
            vector<vector<int>>(m, vector<int>(n+m, -1))
        );
        return solve(grid,0,0,0,dp);
    }
};