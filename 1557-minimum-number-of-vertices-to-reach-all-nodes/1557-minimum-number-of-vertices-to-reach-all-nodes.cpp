class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
      
        vector<int>parent(n,-1);
        
        for(auto x:edges){
            int u=x[0];
            int v=x[1];
            parent[v]=u;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(parent[i]==-1){
                ans.push_back(i);
            }
        }

        return ans;
    }
};