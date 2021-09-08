#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     ll k,n,w;
     cin>>k>>n>>w;
     ll sum = ((w*(w+1))/2)*k;
     if(sum<=n){
         cout<<0;
     }
     else{
         cout<<sum-n;
     }

    return 0;
}