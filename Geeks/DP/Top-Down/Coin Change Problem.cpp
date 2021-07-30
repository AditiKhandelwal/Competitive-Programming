class Solution{

	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    // Your code goes here
	    int dp[M+1][V+1];
	    sort(coins,coins+M);
	    memset(dp,INT_MAX,sizeof dp);
	    for(int i =0;i<=M;i++){
	        dp[i][0]=0;
	    }
	    for(int i=1;i<=V;i++){
	        dp[0][i]=INT_MAX-1;
	    }
	    for(int i =1;i<=M;i++){
	        for(int j =1;j<=V;j++){
	            if(j>=coins[i-1]){
	                dp[i][j]=min(dp[i-1][j],1+dp[i][j-coins[i-1]]);
	            }
	            else{
	                dp[i][j]= dp[i-1][j];
	            }
	        }
	    }
	    if(dp[M][V]==INT_MAX-1){
	        return -1;
	    }
	    return dp[M][V];
	} 
	  
};