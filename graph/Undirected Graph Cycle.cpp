class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        // create a visited array
        vector<int>vis(v,0);
        // solve using bfs
        // make a queue which sore element and parent node
        queue<pair<int,int>>q;
        for(int i=0;i<v;i++){
            if(!vis[i]){
                q.push({i,-1});
                vis[i]=1;
                while(!q.empty()){
                    int node=q.front().first;
                    int parent=q.front().second;
                    q.pop();
                    for(auto it:adj[node]){
                        if(!vis[it]){
                            vis[it]=1;
                            q.push({it,node});
                        }
                        else if( it!=parent){
                            return true;
                        }
                    }
                } 
            }
        }
        return false;
    }
};