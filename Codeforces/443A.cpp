#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     string s;
     getline(cin, s);
     if(s.length()==2 || s.length()==0){
         cout<<0;
     }
     else{
      map<char,int> m;
      for(int i =1;i<s.length();i=i+3){
          if(s[i]>=97 && s[i]<=122)
             m[s[i]]++;
      }
      cout<<m.size();
     }
    return 0;
}