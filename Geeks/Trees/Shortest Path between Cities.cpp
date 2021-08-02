class Solution{   
public:
    int shortestPath( int x, int y){ 
        // code here 
       int count=0;
       while(x!=y){
           if(y>x){
               y=y/2;
               count++;
           }
           else if(x>y){
               x=x/2;
               count++;
           }
       }
       return count;
    }
};