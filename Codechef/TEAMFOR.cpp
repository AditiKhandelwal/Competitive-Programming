#include <iostream>
using namespace std;

int main() {
	// your code goes here
		int tc;
		cin>>tc;
		while(tc--){
		    int n;
		    cin>>n;
		    string s,t;
		    cin>>s;
		    cin>>t;
		    if(n==1){
		        cout<<0<<"\n";
		    }
		    else{
		    int both_zero =0;
		    int both_one =0;
		    int english =0;
		    int prog =0;
		    for(int i =0;i<n;i++){
		        if(s[i]=='1' && t[i]=='1'){
		            both_one++;
		        }
		        else if(s[i]=='0' && t[i]=='0'){
		            both_zero++;
		        }
		        else if(s[i]=='1' && t[i]=='0'){
		            prog++;
		        }
		        else{
		            english++;
		        }
		    }
		    int ans =0;
		    if(english>prog){
		        ans+=prog;
		        english = english -prog;
		        prog=0;
		    }
		    else {
		        ans+=english;
		        prog = prog-english;
		        english =0;
		    }
		    if(both_one>both_zero){
		        ans+=both_zero;
		        both_one-=both_zero;
		        both_zero=0;
		    }
		    else{
		        ans+=both_one;
		        both_one =0;
		        both_zero=0;
		    }
		    if(both_one!=0 && english!=0){
		        if(both_one>english){
		            ans+=english;
		            
		            both_one-=english;
		            english =0;
		        }
		        else{
		            ans+=both_one;
		            both_one=0;
		            english =0;
		        }
		    }
		    if(both_one!=0 && prog!=0){
		        if(both_one>prog){
		            ans+=prog;
		            
		            both_one-=prog;
		            prog =0;
		        }
		        else{
		            ans+=both_one;
		            both_one=0;
		            prog =0;
		        }
		    }
		    if(both_one!=0){
		        ans+= (both_one/2);
		    }
		    cout<<ans<<"\n";
		   }
		}
	return 0;
}