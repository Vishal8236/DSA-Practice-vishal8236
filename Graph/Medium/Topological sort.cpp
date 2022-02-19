class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void findtoposort(int i, vector<int>& visited, stack<int>& st, vector<int> adj[])
	{
	    visited[i] = 1;
	    for(auto it : adj[i])
	    {
	        if(visited[it] == 0)
	        {
	            findtoposort(it, visited, st, adj);
	        }
	    }
	    st.push(i);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    vector<int> res;
	    vector<int> visited(V, 0);
	    stack<int> st;
	    
	    for(int i=0; i<V; i++)
	    {
	        if(visited[i] == 0)
	        {
	            findtoposort(i, visited, st, adj);
	        }
	    }
	    
	    while(!st.empty())
	    {
	        res.push_back(st.top());
	        st.pop();
	    }
	    return res;
	}
};




problem link - https://practice.geeksforgeeks.org/problems/topological-sort/1