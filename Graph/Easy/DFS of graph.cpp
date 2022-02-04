class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void traverseGraph(int node, vector<int>& res, vector<int> adj[], vector<int>& visited)
    {
        res.push_back(node);
        visited[node] = 1;
        for(auto it : adj[node])
        {
            if(!visited[it])
            {
                traverseGraph(it, res, adj, visited);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> visited(V, 0);
        vector<int> res;
        for(int i=0; i<V; i++)
        {
            if(!visited[i])
            {
                traverseGraph(i, res, adj, visited);        
            }
        }
        return res;
    }
};


problem link - https://practice.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1