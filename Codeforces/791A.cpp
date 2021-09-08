#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll a,b;
    cin>>a>>b;
    ll ans =0;
    while(a<=b){
       a= a*3;
       b =b*2;
       ans++;
    }
    cout<<ans;
    
    
    return 0;
}