class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
        vector<vector<int>> res;
        for(int i=0; i<V; i++)
        {
            vector<int> tmp;
            tmp.push_back(i);
            for(auto it : adj[i])
            {
                tmp.push_back(it);
            }
            res.push_back(tmp);
        }
        return res;
    }
};


Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(n)





class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        // Code here
        vector<vector<int>> res(V);
        for(int i=0; i<V; i++)
        {
            res[i].push_back(i);
            for(auto it : adj[i])
            {
                res[i].push_back(it);
            }
        }
        return res;
    }
};


Expected Time Complexity: O(V + E)
Expected Auxiliary Space: O(1)


problem link - https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1/