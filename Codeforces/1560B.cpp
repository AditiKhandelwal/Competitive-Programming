#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	long long int t;
	cin>>t;
	while(t--){
	    long long int a,b,c;
	    cin>>a>>b>>c;
	    long long int total = abs(a-b)*2;
	    if(a> total || b> total){
	        cout<<-1<<"\n";
	    }
	    else if(c> total){
	        cout<<-1<<"\n";
	    }
	    else if(c <= (total/2)){
	        cout<< c+abs(a-b)<<"\n";
	    }
	    else{
	        cout<<c-abs(a-b)<<"\n";
	    }
	    
	}
	return 0;
}