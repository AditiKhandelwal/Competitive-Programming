class Solution {
public:
    bool cycle(vector<vector<int> >& g,int i, vector<bool>& visited, vector<bool>& onpath){
        if(visited[i]){
            return false;
        }
        visited[i]=true;
        onpath[i]=true;
        for(int j =0;j<g[i].size();j++){
            if(onpath[g[i][j]] || cycle(g,g[i][j],visited,onpath)){
                return true;
            }
        }
        return onpath[i]=false;
    }
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here
	    vector<vector<int> > g(N);
	    for(int i =0;i<prerequisites.size();i++){
	        g[prerequisites[i].second].push_back(prerequisites[i].first);
	    }
	    vector<bool> visited(N,false);
	    vector<bool> onpath(N,false);
	    for(int i =0;i<N;i++){
	        if(visited[i]==false ){
	            if(cycle(g,i,visited,onpath)){
	                return false;
	            }
	        }
	    }
	    return true;
	    
	}
};