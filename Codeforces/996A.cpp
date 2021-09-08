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
    ll bills[]={1,5,10,20,100};
    ll ans =0;
    for(ll i =4;i>=0;i--){
        ans+=n/bills[i];
        n = n%bills[i];
    }
    cout<<ans;
    
    return 0;
}