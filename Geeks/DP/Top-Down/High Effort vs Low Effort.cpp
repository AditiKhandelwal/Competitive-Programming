class Solution
{
    public:
        int maxAmt(int n , int hi[] , int li[])
        {
            //code here.   
            int dp[n+1];
            dp[0]=0;
            dp[1]=hi[0];
            for(int i =2;i<=n;i++){
                dp[i]= max(dp[i-2]+hi[i-1],dp[i-1]+li[i-1]);
            }
            return dp[n];
        }
};