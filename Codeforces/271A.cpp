#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(ll n){
    map<int,bool> m;
    int d=0;
    while(n!=0){
       d= n%10;
       if(m.find(d)!=m.end()){
           
           return false;
       }
       else{
           m[d]=true;
       }
       n=n/10;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    for(ll i =n+1;i<=9012;i++){
        if(check(i)){
            cout<<i<<"\n";
           break;
        }
    }
    
    return 0;
}