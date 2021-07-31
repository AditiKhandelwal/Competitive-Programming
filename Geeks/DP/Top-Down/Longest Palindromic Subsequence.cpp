
int longestPalinSubseq (string S)
{
    // your code here
     int n = S.length();
        int dp[n][n];
        int j=0;
        memset(dp,0,sizeof dp);
        for(int i =0;i<n;i++){
            dp[i][i]=1;
        }
        for(int s =2;s<=n;s++){
            for(int i =0;i<n;i++){
                j=i+s-1;
                if(i<n && j<n && S[i]==S[j]){
                    dp[i][j]=dp[i+1][j-1]+2;
                }
                else if(i<n && j<n){
                    dp[i][j]= max(dp[i+1][j],dp[i][j-1]);
                }
            }
        }
        return dp[0][n-1];
}