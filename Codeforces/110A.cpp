#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isLucky(ll n){
    while(n!=0){
        if(n%10 == 4 || n%10==7){
            n=n/10;
        }
        else{
            return false;
        }
    }
    return true;
}

bool isNearlyLucky(ll n){
    ll count =0;
    while(n!=0){
        if(n%10==4 || n%10==7){
            count++;
        }
        n= n/10;
    }
    if(count==0){
        return false;
    }
    if(isLucky(count)){
        return true;
    }
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin>>n;
    if(isNearlyLucky(n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}