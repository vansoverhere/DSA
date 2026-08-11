class Solution {
private:
    void dfs(int node, vector<int> &vis, vector<vector<int>>& isConnected,int n ){
        vis[node]=1;
        
        for(int i=0; i<n; i++){
            if(isConnected[node][i]==1 && !vis[i]){
                dfs(i,vis,isConnected,n);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        
        vector<int>vis(n,0);
        int cnt=0;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                cnt++;
                dfs(i,vis,isConnected,n);
            }
        }return cnt;
    }
};