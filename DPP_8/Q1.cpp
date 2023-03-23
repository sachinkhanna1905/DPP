
                       // BFS Traversal

vector<int> bfsOfGraph(int V, vector<int> adj[]) {
           // vector<int> adj[] ---> vector<list<int> adj;
             unordered_map<int,bool> visited;
             vector<int> ans;
             queue<int> q;
             q.push(0);
             visited[0]=1;
              while(!q.empty()){
                   int front=q.front();
                   q.pop();
                   // store node in vector in the BFS order
                    ans.push_back(front);
                   // travel list
                   for(auto i:adj[front]){
                       if(!visited[i]){
                           visited[i]=true;
                           q.push(i);
                       }
                   }
       }
             return ans;
    }


                            // DFS Traversal

    void dfs(vector<int> adj[],unordered_map<int,bool> &visited,vector<int> &ans, int node){
         // using recursion or inbuilt stack
          ans.push_back(node);
          visited[node]=1;
          for(auto i:adj[node]){
              if(!visited[i]){
                  dfs(adj,visited,ans,i);
              }
          }
      
  }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
         
         unordered_map<int,bool> visited;
         vector<int> ans;
         for(int i=0;i<V;i++){
             if(!visited[i]){
                 dfs(adj,visited,ans,i);
             }
         }
         return ans;
    }