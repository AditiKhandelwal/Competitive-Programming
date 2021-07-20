class Solution
{
	public:
	void tSort(int v, int visited[], vector<int> adj[], stack<int> &s ){
	    visited[v]=1;
	    for(int j =0;j<adj[v].size();j++){
	        if(visited[adj[v][j]]==0){
	             tSort(adj[v][j],visited,adj,s);
	        }
	    }
	    s.push(v);
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    int visited[V];
	    vector<int> ans;
	    stack<int> s;
	    memset(visited , 0 , sizeof visited);
	    for(int i =0;i<V;i++ ){
	        if(visited[i]==0){
	            tSort(i,visited,adj,s);
	        }
	    }
	    while(!s.empty()){
	        ans.push_back(s.top());
	        s.pop();
	    }
	    return ans;
	}
};