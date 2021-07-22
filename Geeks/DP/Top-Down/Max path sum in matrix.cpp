using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n+1][n+1];
	    int dp[n+1][n+1];
	    for(int i =0;i<=n;i++)
	    {
	        for(int j =0;j<=n;j++)
	        {
	            if(i==0||j==0)
	            {
	                arr[i][j]=0;
	                dp[i][j]=0;
	            }
	            else
	            {
	                dp[i][j]=0;
	                cin>>arr[i][j];
	            }
	        }
	    }
	    for(int i =1;i<=n;i++)
	    {
	        for(int j =1;j<=n;j++)
	        {
	            if(j==n)
	            {
	                dp[i][j]= max(dp[i-1][j],dp[i-1][j-1])+arr[i][j];
	            }
	            else{
	                dp[i][j]= max(max(dp[i-1][j],dp[i-1][j-1]),dp[i-1][j+1])+arr[i][j];
	            }
	        }
	    }
	    cout<<*max_element(dp[n],dp[n]+n+1)<<"\n";
	}
	return 0;
}