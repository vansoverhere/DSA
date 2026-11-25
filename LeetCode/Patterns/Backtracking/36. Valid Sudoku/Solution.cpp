class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>>rows(9);
        vector<unordered_set<char>>cols(9);
        vector<unordered_set<char>> grid(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char val=board[i][j];
                if(val=='.'){
                    continue;
                }
                int box=(i/3)*3+(j/3);

                if(rows[i].count(val) || cols[j].count(val)|| grid[box].count(val)){
                    return false;
                }else{
                    rows[i].insert(val);
                    cols[j].insert(val);
                    grid[box].insert(val);
                }
            }
        }return true;
    }
};

/*class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<int> rows(9,0);
        vector<int> cols(9,0);
        vector<int> grid(9,0);

        for(int i=0;i<9;i++){
            for(int j=0; j<9; j++){
                char val=board[i][j];
                if(val=='.'){
                    continue;
                }
                int digit= val-'1';
                int bit= 1 << digit;
                int box= (i/3)*3+(j/3);

                if((rows[i] & bit) || 
                (cols[j] & bit) ||
                (grid[box] & bit) ){
                    return false;
                }else{
                    rows[i]|=bit;
                    cols[j]|=bit;
                    grid[box]|=bit;
                }
            }
        }return true;
    }
};*/
