using namespace std;
int edit(string str1,string str2, int p,int q)
{
    int dp[p+1][q+1];
    for(int i =0;i<=p;i++)
    {
        dp[i][0]=i;
    }
    for(int i =0;i<=q;i++)
    {
        dp[0][i]=i;
    }
    for(int i =1;i<=p;i++)
    {
        for(int j =1;j<=q;j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
            }
        }
    }
    return dp[p][q];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int p,q;
	    cin>>p>>q;
	    string str1,str2;
	    cin>>str1>>str2;
	    cout<<edit(str1,str2,p,q)<<"\n";
	}
	return 0;
}