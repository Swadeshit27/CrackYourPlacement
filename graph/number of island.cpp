class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>&vis, vector<vector<char>>&grid){
        int n=grid.size(), m=grid[0].size();
        vis[i][j]=1;
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        for(int r=0; r<4;r++){ 
              int nr=i+dr[r];
              int nc=j+dc[r];
              if(nr>=0 && nr<n && nc>=0 && nc<m && vis[nr][nc]==0 && grid[nr][nc]=='1' ){
                dfs(nr, nc, vis, grid);
              }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        int n=grid.size(), m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    cout<<grid[i][j]<<" "<<i<<" "<<j<<endl;
                    dfs(i, j, vis, grid);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};