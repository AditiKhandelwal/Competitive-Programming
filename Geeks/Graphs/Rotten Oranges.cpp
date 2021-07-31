class Solution 
{
    public:
    //Function to find minimum time required to rot all oranges. 
    struct node{
        int i;
        int j;
        int t;
    };
    bool valid(int i, int j, int n, int m){
        if(i<0 || i>=n || j<0 || j>=m){
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        int total =0;
        int flag=0;
        int x[]={-1,+1,0,0};
        int y[]={0,0,-1,+1};
        queue< node> q;
        bool visited[n][m];
        memset(visited, false, sizeof visited);
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]==1){
                    total++;
                }
                if(grid[i][j]==2){
                    node nn = {i,j,0};
                    q.push(nn);
                    visited[i][j]=true;
                }
            }
        }
        int l,k=0;
        int max =0;
                   while(!q.empty()){
                       node rv = q.front();
                       q.pop();
                       for(int p=0;p<4;p++){
                          l=rv.i+x[p];
                          k=rv.j+y[p];
                          if(valid(l,k,n,m) && !visited[l][k]){
                              if(grid[l][k]==1){
                                  visited[l][k]=true;
                                  total--;
                                  node nn = {l,k,rv.t+1};
                                  if(max<rv.t+1){
                                      max=rv.t+1;
                                  }
                                  q.push(nn);
                              }
                          }
                       }
                   }
       
        if(total!=0){
           return -1; 
        }
        return max;
    }
};