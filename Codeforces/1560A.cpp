#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	cin>>t;
	int arr[1000];
	int i=0;
	int n =1;
	while(i<1000){
	    if(n%3==0){
	        n++;
	    }
	    else if(n%10==3){
	        n++;
	    }
	    else{
	        arr[i]=n;
	        i++;
	        n++;
	    }
	}
	while(t--){
	    int k;
	    cin>>k;
	    cout<<arr[k-1]<<"\n";
	}
	return 0;
}