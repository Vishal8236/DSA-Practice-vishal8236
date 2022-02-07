class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(int i, vector<int>& visited, vector<int>& tmp, vector<int> adj[])
    {
        visited[i] = 1;
        tmp[i] = 1;
        for(auto it : adj[i])
        {
            if(!visited[it])
            {
                if(dfs(it, visited, tmp, adj)) return true;
            }
            else if(tmp[it])
            {
                return true;
            }
        }
        tmp[i] = 0;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> visited(V, 0);
        vector<int> tmp(V, 0);
        
        for(int i=0; i<V; i++)
        {
            if(visited[i] == 0)
            {
                if(dfs(i, visited, tmp, adj))
                {
                    return true;
                }
            }
        }
        return false;
    }
};



problem link - https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1/