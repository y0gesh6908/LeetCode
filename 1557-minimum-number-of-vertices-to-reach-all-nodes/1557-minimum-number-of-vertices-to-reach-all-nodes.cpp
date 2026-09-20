class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,vector<int>>mp;
        vector<int>parent(n,-1);
        vector<int>visited(n,-1);
        for(auto x:edges){
            int u=x[0];
            int v=x[1];

            mp[u].push_back(v);
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