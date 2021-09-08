#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     ll n,p,q;
     cin>>n;
     cin>>p;
     ll x[p];
     for(ll i =0;i<p;i++){
         cin>>x[i];
     }
     cin>>q;
     ll y[q];
     for(ll i =0;i<q;i++){
         cin>>y[i];
     }
     sort(x,x+p);
     sort(y,y+q);
     ll i=0,j=0;
     ll check =1;
     while(i<p && j<q){
          if(x[i]!=y[j]){
              if(x[i]==check){
                  check++;
                  i++;
              }
              else if(y[j]==check){
                  check++;
                  j++;
              }
              else{
                  break;
              }
          }
          else{
              if(x[i]==check){
                  check++;
                  i++;
                  j++;
              }
              else{
                  break;
              }
          }
     }
     if(i!=p){
         while(i<p){
             if(x[i]==check){
                 check++;
                 i++;
             }
             else{
                 break;
             }
         }
     }
     if(j!=q){
         while(j<q){
             if(y[j]==check){
                 check++;
                 j++;
             }
             else{
                 break;
             }
         }
     }
     if((check-1)==n){
         cout<<"I become the guy.";
     }
     else{
         cout<<"Oh, my keyboard!";
     }

    return 0;
}