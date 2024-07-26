class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        vector<int>vis(v,0),ans;
        queue<int> q;
        vis[0]=1;
        q.push(0);
        while(!q.empty()){
            int top=q.front();
            ans.push_back(top);
            q.pop();
            for(auto it:adj[top]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push(it);
                }
            }
        }
        return ans;
    }
};