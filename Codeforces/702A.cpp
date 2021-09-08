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
    ll a[n];
    for(ll i =0;i<n;i++){
        cin>>a[i];
    }
    ll ans =1;
    ll count =1;
    for(int i =1;i<n;i++){
        if(a[i]>a[i-1]){
            count++;
        }
        else{
            if(ans<count){
                ans=count;
            }
            count=1;
        }
    }
    if(ans<count){
        ans=count;
    }
    cout<<ans;
    
    return 0;
}