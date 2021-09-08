#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        int min_e = min_element(a,a+n)-a;
        int max_e = max_element(a,a+n)-a;
        int ans = min(max(min_e,max_e)+1,min(n-min(min_e,max_e),min(1+min_e+n-max_e,1+max_e+n-min_e)));
        cout<<ans<<"\n";
    }
    
    
    return 0;
}


// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int f_ans=0;
// void solve(ll a[], int i, int j,int n, int max_e, int min_e, int ans, bool mi, bool ma){
//     if(i>j){
//         return;
//     }
//     if(mi==true && ma==true){
//         if(f_ans>ans){
//             f_ans=ans;
//         }
//         return;
//     }
//     if(i<n && i<j){
//         if(a[i]==min_e){
//            solve(a,i+1,j,n,max_e,min_e,ans+1,true,ma);
//         }
//         else if(a[i]==max_e){
//             solve(a,i+1,j,n,max_e,min_e,ans+1,mi,true);
//         }
//         else{
//            solve(a,i+1,j,n,max_e,min_e,ans+1,mi,ma);
//         }
//     }
//     if(j<n && i<j){
//         if(a[j]==min_e){
//            solve(a,i,j-1,n,max_e,min_e,ans+1,true,ma);
//         }
//         else if(a[j]==max_e){
//             solve(a,i,j-1,n,max_e,min_e,ans+1,mi,true);
//         }
//         else{
//            solve(a,i,j-1,n,max_e,min_e,ans+1,mi,ma);
//         }
//     }
// }
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
    
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll a[n];
//         for(int i =0;i<n;i++){
//             cin>>a[i];
//         }
//         f_ans=INT_MAX;
//         solve(a,0,n-1,n,*max_element(a,a+n),*min_element(a,a+n),0,false, false);
//         cout<<f_ans<<"\n";
//     }
    
    
//     return 0;
// }