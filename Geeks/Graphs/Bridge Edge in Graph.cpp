class Solution
{
	public:
    //Function to find if the given edge is a bridge in graph.
    void dfs(vector<int> adj[],int i, vector<bool>& visited){
        visited[i]=true;
        for(int j=0;j<adj[i].size();j++){
            if(visited[adj[i][j]]==false){
                dfs(adj,adj[i][j],visited);
            }
        }
    }
    int isBridge(int V, vector<int> adj[], int c, int d) 
    {
        // Code here
        int count1 =0;
        int count2 =0;
        vector<bool> visit(V,false);
         for(int i=0;i<V;i++){
                if(visit[i]==false){
                    count1++;
                    dfs(adj,i,visit);
                }
        }
        adj[c].erase(std::find(adj[c].begin(),adj[c].end(),d));
        adj[d].erase(std::find(adj[d].begin(),adj[d].end(),c));
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
                if(visited[i]==false){
                    count2++;
                    dfs(adj,i,visited);
                }
        }
        if(count1==count2){
            return 0;
        }
        return 1;
    }
};