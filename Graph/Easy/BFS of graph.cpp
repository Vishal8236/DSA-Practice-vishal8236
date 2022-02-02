class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> res;
        bool visited[V+1];
        
        for(int i=0; i<=V; i++)
        {
            visited[i] = false;
        }
        
        queue<int> q;
        visited[0] = true;
        q.push(0);
        
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            res.push_back(top);
            
            for(int nu : adj[top])
            {
                if(visited[nu] == false)
                {
                    visited[nu] = true;                    
                    q.push(nu);
                }
            }
        }
        return res;
    }
};



problem link - https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1/


Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(V)