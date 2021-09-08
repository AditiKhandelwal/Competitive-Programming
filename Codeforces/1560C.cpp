#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int k,r,c ;
	    cin>>k;
	    if(k==1){
	    	cout<<"1 1"<<"\n";
	    }
	    else{
	    long long int l = (long long int)sqrt(k);
	    
	    long long int n = l+1;
	    if(l*l==k){
	       n =l;
	       l=l-1;
	    }
	    if(k-(l*l)<=n){
	        c = n;
	        r = k -(l*l);
	    }
	    else{
	        r = n;
	        c = n - (k-(l*l)-n);
	    }
	    cout<<r<<" "<<c<<"\n";
	    }
	}
	return 0;
}