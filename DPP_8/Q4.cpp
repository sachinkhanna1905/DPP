// check wheather a graph contains a cycle or not

bool dfs(vector<int>adj[],unordered_map<int,bool>&visited, int node,int parent){
         
      visited[node]=true;
      for(auto i:adj[node]){
           if(!visited[i]){
              if(dfs(adj,visited,i,node)){
                  return true;
              }
          }else if(visited[i]==true && parent!=i){
              // cycle is present
                return true;
          }
      }
      return false;
    }
  
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        unordered_map<int,bool> visited;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                if(dfs(adj,visited,i,-1)){
                    return true;
                }
            }
        }
        return false;
    }