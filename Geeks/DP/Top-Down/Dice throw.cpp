class Solution {
  public:
    long long noOfWays(int M , int N , int X) {
        // code here
        long long int dp[N+1][X+1];
        memset(dp,0, sizeof dp);
           dp[0][0]=1;
          for(int i =1;i<=N;i++){
              for(int j =1;j<=X;j++){
                 for(int k =1;k<=M;k++){
                    if(j-k>=0){
                         dp[i][j] += dp[i-1][j-k];
                    }
              }
          }
        }
        return dp[N][X];
    }
};