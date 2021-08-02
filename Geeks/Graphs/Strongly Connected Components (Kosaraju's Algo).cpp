class Solution
{
	public:
	void dfs(vector<int> adj[], int v, vector<bool>& visited, stack<int>& s){
	    visited[v]=true;
	    for(int i=0;i<adj[v].size();i++){
	        if(visited[adj[v][i]]==false){
	            dfs(adj,adj[v][i],visited,s);
	        }
	    }
	    s.push(v);
	}
	void dfs_s(vector<int> adj[], int v, vector<bool>& visited){
	    visited[v]=true;
	    for(int i=0;i<adj[v].size();i++){
	        if(visited[adj[v][i]]==false){
	            dfs_s(adj,adj[v][i],visited);
	        }
	    }
	}
	//Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        //code here
        vector<bool> visited(V,false);
        stack<int> s;
        for(int i =0;i<V;i++){
            if(visited[i]==false){
                dfs(adj,i,visited,s);
            }
        }
       vector<int> adj2[V];
       for(int i =0;i<V;i++){
           for(int j =0;j<adj[i].size();j++){
               adj2[adj[i][j]].push_back(i);
           }
       }
       int count =0;
       vector<bool> visit(V,false);
       while(s.empty()==false){
           int rv = s.top();
           s.pop();
           if(visit[rv]==false){
               count++;
               dfs_s(adj2,rv,visit);
           }
       }
       return count;
    }
};