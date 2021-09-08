#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        if(sum%2==0){
            vector<vector<bool> > dp(n+1,vector<bool>((sum/2)+1,false));
            dp[0][0]= true;
            for(int i=1;i<=n;i++){
                dp[i][0]=false;
            }
            for(int j=1;j<=(sum/2);j++){
                dp[0][j]=false;
            }
            sum=sum/2;
            for(int i =1;i<=n;i++){
                for(int j =1;j<=sum;j++){
                    if(a[i-1]<=j){
                        dp[i][j]= dp[i-1][j] || dp[i-1][j-a[i-1]];
                    }
                    else{
                        dp[i][j]=dp[i-1][j];
                    }
                }
            }
            if(dp[n][sum]){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
    
    return 0;
}