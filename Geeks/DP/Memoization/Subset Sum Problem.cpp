 int dp[101][100001];
class Solution{   
public:
   
    int sumf(int n, int arr[], int sum){
        if(sum==0){
            return 1;
        }
        if(n<=0){
            return 0;
        }
        if(dp[n][sum]!=-1){
            return dp[n][sum];
        }
        
        if(arr[n-1]<=sum){
            dp[n][sum] = (sumf(n-1,arr,sum-arr[n-1]) || sumf(n-1,arr,sum));
             return dp[n][sum];
        }
        else{
           dp[n][sum]=sumf(n-1,arr,sum); 
            return dp[n][sum];
        }
        return dp[n][sum];
    }
    bool isSubsetSum(int N, int arr[], int sum){
        // code here 
        
        memset(dp, -1, sizeof dp);
         return sumf(N,arr, sum);
        
    }
};