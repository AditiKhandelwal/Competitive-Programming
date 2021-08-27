#include <iostream>
using namespace std;
#include<bits/stdc++.h>
int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,a;
	while(t--){
	     cin>>n>>a;
	     n = (int)sqrt(n);
	     cout<<n*a<<"\n";
	}
	return 0;
}