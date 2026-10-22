class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        long long x=1LL* n*n;
        long long s=0;
        long long sq=0;
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                s+=grid[r][c];
                sq+=grid[r][c] * grid[r][c];
            }
        }
        long long Sx=x*(x+1)/2;
        long long Sx2=x*(x+1)*(2*x+1)/6;

        long long val1=s-Sx;
        long long val2=sq-Sx2;

        long long r=(val1+(val2/val1))/2;
        long long m=r-val1;

        vector<int>ans(2);
        ans[0]=r;
        ans[1]=m;
        return ans;
    }
};