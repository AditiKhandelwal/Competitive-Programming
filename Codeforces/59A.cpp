#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    cin>>s;
    int lower=0,upper=0;
    for(int i =0;i<s.length();i++){
       if(s[i]>=97 && s[i]<=122){
           lower++;
       }
       else{
           upper++;
       }
    }
    if(upper>lower){
      string ans="";
      for(int i =0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
           ans = ans + (char)(s[i]-97+65);
       }
       else{
           ans+= s[i];
       }
      }
      cout<<ans;
    }
    else{
        string ans="";
      for(int i =0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
           ans+=s[i];
       }
       else{
           ans = ans + (char)(s[i]-65+97);
       }
      }
      cout<<ans;
    }
    return 0;
}