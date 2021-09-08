#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,h;
    cin>>n>>h;
    ll ans =0;
    ll a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
        if(a[i]>h){
            ans+=2;
        }
        else{
            ans+=1;
        }
    }
    cout<<ans;
    
    
    return 0;
}