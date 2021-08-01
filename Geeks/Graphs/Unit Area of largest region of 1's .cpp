class Solution
{
    public:
    //Function to find unit area of the largest region of 1s.
    bool valid(int i , int j, int n, int m){
        if(i<0 || i>=n || j<0 || j>=m){
            return false;
        }
        return true;
    }
    int dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited,int n, int m, int dis,int i, int j){
        int x[]={-1,-1,-1,0,0,1,1,1};
        int y[]={-1,0,1,-1,1,-1,0,1}; 
        visited[i][j]=true;
        int l,q;
        for(int k=0;k<8;k++){
            l = i+x[k];
            q= j+y[k];
            if(valid(l,q,n,m) && visited[l][q]==false && grid[l][q]==1){
                dis = dfs(grid,visited,n,m,dis+1,l,q);
            }
        }
        return dis;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int max=0;
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<bool> > visited(n, vector<bool> (m, false));
        int check=0;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==1 && visited[i][j]==false){
                    check =dfs(grid,visited,n,m,1,i,j);
                    if(check>max){
                        max=check;
                    }
                }
            }
        }
        return max;
    }
};