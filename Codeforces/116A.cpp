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
    ll b[n];
    ll capacity =0;
    ll max_c=0;
    for(int i =0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
    }
    for(int i=0;i<n;i++){
             if(max_c<capacity){
                max_c = capacity;
            }
            capacity-=a[i];
            capacity+=b[i];
    }
    cout<<max_c<<"\n";
    
    return 0;
}