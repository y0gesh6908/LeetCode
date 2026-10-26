class Solution {
long long int dfs(vector<vector<int>>& grid, int i,int j,vector<vector<bool>>&visited){
    int m=grid.size();
    int n=grid[0].size();
    if(i>=m || i<0){
        return 0;
    }
    if(j>=n || j<0){
        return 0;
    }

    if(grid[i][j]==0){
        return 0;
    }
    if(visited[i][j]){
        return 0;
    }
    visited[i][j]=true;

    return grid[i][j]+dfs(grid,i+1,j,visited)+dfs(grid,i-1,j,visited)+dfs(grid,i,j+1,visited)+dfs(grid,i,j-1,visited);

}
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!visited[i][j] && grid[i][j]!=0){
                    long long int x=dfs(grid,i,j,visited);

                    if(x%k==0){
                        cnt++;
                    }
                }
            }
        }

        return cnt;
    }
};