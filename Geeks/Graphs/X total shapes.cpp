class Solution
{
    public:
    //Function to find the number of 'X' total shapes.
    struct node{
      int i;
      int j;
    };
    int xShape(vector<vector<char>>& grid) 
    {
        // Code here
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};
        queue<node> q;
        int n = grid.size();
        int m = grid[0].size();
        int count =0;
        int u,v;
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j]=='X'){
                    node nn ={i,j};
                    q.push(nn);
                    grid[i][j]='O';
                    while(!q.empty()){
                        node rv = q.front();
                        q.pop();
                        for(int k =0;k<4;k++){
                            u=rv.i+x[k];
                            v=rv.j+y[k];
                            if(u>=0 && u<n && v>=0 && v<m && grid[u][v]=='X'){
                                node nn = {u,v};
                                q.push(nn);
                                grid[u][v]='O';
                            }
                        }
                            
                    }
                    count++;
                }
            }
        }
        return count;
    }
};