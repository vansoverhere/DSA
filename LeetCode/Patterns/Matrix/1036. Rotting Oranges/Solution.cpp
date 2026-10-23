class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int r= grid.size();
        int c = grid[0].size();
        queue<pair <pair<int,int>, int>> q;

        vector<vector<int>> vis(r , vector<int>(c,0));

        int t=0;

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j] == 2 && vis[i][j]==0){
                   q.push({ {i,j} , t} );
                   vis[i][j]=2;
                }  
            }
        }
        while(!q.empty()){
            int drow[4] = {-1,0,0,1};
            int dcol[4] = {0,-1,1,0};

            int first= q.front().first.first;
            int second = q.front().first.second;
            int tm = q.front().second;

            t=max(tm,t);
            q.pop();

            for(int x=0; x<4; x++){
                int nrow = first + drow[x];
                int ncol = second + dcol[x];
                
                if(nrow>=0 && nrow<r && ncol>=0 && ncol<c && grid[nrow][ncol]==1 && vis[nrow][ncol]==0){
                    vis[nrow][ncol]=2;

                    q.push({ {nrow,ncol} , tm+1 });
                }
            }
        }

        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(grid[i][j] ==1 && vis[i][j]!=2) return -1;
            }
        }
        return t;
        
    }
};