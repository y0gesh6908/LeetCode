class Solution {
bool dfs(int i, int j, int pi, int pj, vector<vector<char>>&grid, vector<vector<int>>& isvisited){
    int r=grid.size();
    int c=grid[0].size();
    isvisited[i][j]=1;

    int rowx[]={-1,1,0,0};
    int colx[]={0,0,-1,1};

    for(int k=0;k<4;k++){
        int nrow=i+rowx[k];
        int ncol= j+colx[k];

        if(nrow>=0 && nrow<r && ncol>=0 && ncol<c && grid[nrow][ncol]==grid[i][j]){
            if(isvisited[nrow][ncol]==0){
                if(dfs(nrow,ncol,i,j,grid,isvisited)){
                    return true;
                }
            }
            else if(nrow!=pi || ncol !=pj){
                return true;
            }
        }

    }
    return false;
}
public:
    bool containsCycle(vector<vector<char>>& grid) {
        vector<vector<int>>isvisited(grid.size(),vector<int>(grid[0].size(),0));

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(isvisited[i][j]==0){
                    if(dfs(i,j,-1,-1,grid,isvisited)){
                        return true;
                    }
                }
                
            }
        }
        return false;
    }
};