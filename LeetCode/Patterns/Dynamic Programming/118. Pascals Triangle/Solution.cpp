class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows);
        v[0]={1};
        for(int i=1;i<numRows;i++){
            vector<int>row(i+1,1);
            for(int j=1;j<i;j++){
                row[j]=v[i-1][j-1]+v[i-1][j];
            }
            v[i]=row;
        }return v;
    }
};