#include <bits/stdc++.h>
#define int long long
using namespace std;

int32_t main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    string s;
	    cin>>n>>k;
	    cin>>s;
	    int ans =0;
	    int last = -(1e6);
	    for(int i =0;i<n;i++){
	        if(s[i]=='0'){
	            continue;
	        }
	        if(i-last<=(k+1)){
	            last = min(last+k,i+1);
	        }
	        else{
	            ans++;
	            last = i+1;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
