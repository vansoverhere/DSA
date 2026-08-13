class Solution {
  private:
    bool dfs(int V, int node, int parent, vector<int> &vis, vector<vector<int>>&adj){
        for(auto neigh: adj[node]){
            if(!vis[neigh]){
                vis[neigh]=1;
                if(dfs(V,neigh,node,vis,adj)==true) return true;
            }
            else if(neigh!=parent){
                return true;
            }       
        }return false;
    }
    
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto edge:edges){
            int u=edge[0];
            int v=edge[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<int>vis(V,0);
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                vis[i]=1;
                if(dfs(V,i,-1,vis,adj)==true){
                    return true;
                };
            }  
        }return false;
    }
};