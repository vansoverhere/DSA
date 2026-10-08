class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        int c=grid[0].size();
        int r= grid.size();

        for(int i=0; i<c-1; i++){
            if(grid[r-1][i] == grid[r-1][i+1]) return false;
        }

        for(int j=0; j<r-1; j++){
            if(grid[j][c-1] != grid[j+1][c-1]) return false;
        }

        for(int i=0; i<r-1; i++){
            for(int j=0; j<c-1; j++){
                if(grid[i][j] != grid[i+1][j]) return false;

                if(grid[i][j] == grid[i][j+1]) return false;
            }
        }
        
        
        return true;
    }
};