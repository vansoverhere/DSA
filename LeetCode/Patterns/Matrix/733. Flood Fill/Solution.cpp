class Solution {
    void dfs (vector<vector<int>>& image, int sr, int sc, int color, int ogcolor, int m, int n ,vector<vector<int>> &vis){
        
        vis[sr][sc]=1;
        
        int drow[4]= {-1,0,0,1};
        int dcol[4]= {0,-1,1,0};

        for(int i = 0; i<4; i++){
            int nrow = sr + drow[i];
            int ncol = sc + dcol[i];

            if (nrow>=0 && nrow <m && ncol>=0 && ncol<n && vis[nrow][ncol]==0 && image[nrow][ncol] == ogcolor){
                image[nrow][ncol] = color;
                dfs(image , nrow, ncol, color, ogcolor, m,n , vis);
            }
        }return;
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int m= image.size();
        int n= image[0].size();
        int ogcolor =  image[sr][sc] ;
        if( image[sr][sc] == color ) return image;

        vector<vector<int>>vis(m, vector<int>(n,0));
        image[sr][sc]= color;

        dfs(image, sr, sc, color, ogcolor, m, n , vis );

        return image;
    }
};