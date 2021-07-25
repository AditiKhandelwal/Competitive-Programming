class Solution 
{
    public:
    //Function to count paths between two vertices in a directed graph.
	int countPaths(int V, vector<int> adj[], int source, int destination)
	{
	    // Code here
	    if(source == destination){
	        return 1;
	    }
	    queue<int> q;
	    q.push(source);
	    int count=0;
	    while(!q.empty()){
	        int rv = q.front();
	        q.pop();
	        for(int i =0;i<adj[rv].size();i++){
	            if(adj[rv][i]==destination){
	                count++;
	            }
	            else{
	                q.push(adj[rv][i]);
	            }
	        }
	    }
	    return count;
	}
};