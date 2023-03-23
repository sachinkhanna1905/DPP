// Implement BFS-Based on topological sort

vector<int> topoSort(int V, vector<int> adj[]){
	  // topological sort using Kahn's alogrithm(using bfs);
	  // step 1 Build the the graph or adjList
	  // step 2 other essential requirements
	  vector<int> degree(V,0);
	  for(int i=0;i<V;i++){
	      for(auto j:adj[i]){
	          degree[j]++;
	      }
	  }
	  queue<int>q;
	    for(int i=0;i<V;i++){
	        if(degree[i]==0){
	            q.push(i);
	        }
	    }
	    // step3: travel the graph
	    vector<int> ans;
	    while(!q.empty()){
	        int front=q.front();
	        q.pop();
	        ans.push_back(front);
	        for(auto i:adj[front]){
	            degree[i]--;
	            if(degree[i]==0){
	                q.push(i);
	            }
	        }
	    }
	    return ans;
	}