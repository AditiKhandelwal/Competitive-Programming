class Solution {
public:
    struct node {
      int i;
      int j;
      int dist;  
    };
    
    bool valid(int i , int j, int n ){
        if(i>=n || j>=n || i<0 || j<0){
            return false;
        }
        return true;
    }
   
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
         int n = grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1){
            return -1;
        }
         int visited[n][n] ;
        memset(visited , 0, sizeof visited);
         int x,y;
         int i[8]={-1,-1,-1,0,0,1,1,1};
         int j[8]={-1,0,1,-1,1,-1,0,1};
         queue<node> q;
         node nn = {0,0,1};
         q.push(nn);
         visited[0][0]=1;
        while(!q.empty()){
           node rv = q.front(); 
           q.pop(); 
           x = rv.i;
           y = rv.j;
           if(x==n-1 && y==n-1){
               return rv.dist;
           }
        for(int k =0;k<8;k++){
            if(valid(x+i[k],y+j[k],n) &&  visited[x+i[k]][y+j[k]]==0 && grid[x+i[k]][y+j[k]]==0 ){
                visited[x+i[k]][y+j[k]]=1;
                node nn = {x+i[k],y+j[k],rv.dist+1};
                q.push(nn);               
        }    
        }
    }
  return -1;
 }                        
};