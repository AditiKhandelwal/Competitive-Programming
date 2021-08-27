#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
	// your code goes here
	int t;
	cin>>t;
	int n,m,q;
	while(t--){
	    cin>>n>>m>>q;
	    bool flag = true;
	    vector<int> people(n+1,0);
	    int count =0;
	    char ch;
	    int j;
	    for(int i =0;i<q;i++){
	        cin>>ch>>j;
	        if(ch=='+'){
	            count++;
	            people[j]=1;
	        }
	        else{
	            if(people[j]==0){
	                flag=false;
	            }
	            else{
	                count--;
	                people[j]=0;
	            }
	        }
	        if(count>m ){
	                flag= false;
	            }
	    }
	    if(flag==false){
	        cout<<"Inconsistent\n";
	    }
	    else{
	        cout<<"Consistent\n";
	    }
	}
	return 0;
}