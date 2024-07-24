//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void dfs(int i, int j, vector<vector<int>>&vis, vector<vector<char>>&grid){
        int n=grid.size(), m=grid[0].size();
        // cout<<"row"<<i<<" "<<"col>"<<j<<" "<<grid[i][j]<<endl;
        vis[i][j]=1; 
        for(int r=-1;r<=1;r++){
            for(int c=-1;c<=1;c++){
                int nr=i+r;
                int nc=j+c;
                if(nr>=0 && nr<n && nc>=0 && nc<m && 
                grid[nr][nc]=='1' && vis[nr][nc]==-1){
                    dfs(nr, nc, vis, grid);
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>vis(n, vector<int>(m,-1));
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){ 
                if(vis[i][j]==-1 && grid[i][j]=='1'){
                    dfs(i, j, vis, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends