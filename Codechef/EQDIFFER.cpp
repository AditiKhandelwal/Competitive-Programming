#include <iostream>
#define ll long long
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll arr[n];
	    unordered_map<ll,ll> m;
	    for(ll i=0;i<n;i++){
	        cin>>arr[i];
	        m[arr[i]]++;
	    }
	    
	    if(n<=2){
	        cout<<0<<"\n";
	    }
	    else{
	        ll max_f =0;
	        for(auto it = m.begin();it!=m.end();++it){
	            if(it->second>max_f){
	                max_f = it->second;
	            }
	        }
	        if(max_f==1){
	            cout<<n-2<<"\n";
	        }
	        else{
	            cout<<(n-max_f)<<"\n";
	        }
	    }
	}
	
	return 0;
}