#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    if(n==1 || n==2 || n==3 || n==4 || n==5){
        cout<<1;
    }
    else{
        vector<ll> steps(n+1,10000000);
        steps[0]=0;
        for(ll i =1;i<=5;i++){
            steps[i]=1;
        }
        for(ll i =6;i<=n;i++){
             for(ll j =1;j<=5;j++){
                 steps[i]= min(steps[i],steps[i-j]+1);
             }    
        }
        cout<<steps[n];
    }
   
    
    
    return 0;
}