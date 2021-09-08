#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(ll n, ll m){
    if(m==n){
        return 0;
    }
    if(n>m){
        return n-m;
    }
    if(n<=0 && m>0){
        return -1;
    }
    if(m%2==0){
         return 1+ solve(n,m/2);
    }
    else{
         return 1+ solve(n,m+1);
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,m;
    cin>>n>>m;
    cout<<solve(n,m);
    
    return 0;
}