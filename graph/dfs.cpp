class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(int ind, vector<int>adj[], vector<int>&ans, vector<int>&vis){
        vis[ind]=1;
        ans.push_back(ind);
        for(auto it:adj[ind]){
            if(!vis[it]){
                dfs(it, adj, ans, vis);
            }
        }
    }
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
         vector<int>ans,vis(v,0);
         dfs(0,adj, ans, vis);
         return ans;
    }
};