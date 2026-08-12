class Solution {
private:
     void bfs(int i, int j, vector<vector<int>>&vis, vector<vector<char>>grid,int r ,int c){
        queue<pair<int,int>>q;
        vis[i][j]=1;
        q.push({i,j});

        while(!q.empty()){
            int row=q.front().first;
            int col=q.front().second;
            q.pop();

            int delrow[]={-1,0,1,0};
            int delcol[]={0,1,0,-1};
                for(int k=0; k<4; k++){
                    int nrow=row+delrow[k];
                    int ncol=col+delcol[k];
                    
                    if(nrow>=0 && nrow<r && ncol>=0 && ncol<c && grid[nrow][ncol]=='1' && !vis[nrow][ncol] ){
                        vis[nrow][ncol]=1;
                        q.push({nrow,ncol});
                    }
                }
        }
     }

public:
    int numIslands(vector<vector<char>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>>vis(r,vector<int>(c,0));
        int cnt=0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j]=='1' && !vis[i][j]){
                    cnt++;
                    bfs(i,j,vis,grid,r,c);
                }
            }
        }return cnt;
    }
};