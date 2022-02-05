class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool bfs(int s,int v, vector<int> adj[], vector<int>& visited)
    {
        queue<pair<int,int>> q;
     
        visited[s] = true;
        q.push({s, -1});
     
        while (!q.empty()) {
     
            int node = q.front().first;
            int par = q.front().second;
            q.pop();
     
            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if (par != it)
                    return true;
            }
        }
        return false;
    }
    bool isCycle(int V, vector<int>adj[]){
	    vector<int> vis(V, 0); 
	    for(int i = 0;i<V;i++) {
	        if(!vis[i]) {
	            if(bfs(i, V, adj, vis)) return true; 
	        }
	    }
	    
	    return false; 
	}
};





problem link - https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1