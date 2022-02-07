class Solution {
public:
    bool isBipartite(int v, vector<int>adj[]){
    queue<int>q;
    vector<int>col(v,-1);
    int temp=0;
    for(int i=0;i<v;i++){
        if(col[i]==-1){
            col[i]=temp;
            temp=!temp;
            q.push(i);
        }
        while(!q.empty()){
            int x=q.front();
            q.pop();
            for(auto it:adj[x]){
                if(col[it]==-1){
                    col[it]=!col[x];
                    q.push(it);
                }
               else if(col[it]==col[x])return false;
            }
        }
    }
    return true;
    }

};


problem link - https://practice.geeksforgeeks.org/problems/bipartite-graph/1#



with DFS ========>>>>>>>>


class Solution {
public:
    bool dfs(int i, int color[], vector<int> adj[])
    {
        if(color[i] == -1) color[i] = 1;
        
        for(auto it : adj[i])
        {
            if(color[it] == -1)
            {
                color[it] = 1 - color[i];
                
                if(!dfs(it, color, adj))
                {
                    return false;
                }
            }
            else if(color[i] == color[it]){
                 return false;   
            }
        }
        return true;
    }
    bool isBipartite(int v, vector<int>adj[]){
        int color[v];
        memset(color, -1, sizeof color);
        
        for(int i=0; i<v; i++)
        {
            if(color[i] == -1)
            {
                if(!dfs(i, color, adj)){ 
                    return false;
                }
            }
        }
        return true;
    }

};