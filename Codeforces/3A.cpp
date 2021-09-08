#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
    int i;
    int j;
    int dis;
    vector<string> path;
};
bool valid(int i, int j){
    if(i<0 || i>=8 || j<0 || j>=8){
        return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s,d;
    cin>>s;
    cin>>d;
    queue<node> q;
    vector<string> ne;
    node nn = {abs((int)s[1]-56),(int)s[0]-97,0,ne};
    q.push(nn);
    int x[]={-1,-1,-1,0,0,1,1,1};
    int y[]={-1,0,1,-1,1,-1,0,1};
    int m,n;
    int min_d = INT_MAX;
    vector<string> f;
    vector<vector<int> > visited(8,vector<int>(8,0));
    visited[q.front().i][q.front().j]=1;
    while(!q.empty()){
        node rv = q.front();
        q.pop();
        if(rv.i==abs((int)d[1]-56) && rv.j==(int)d[0]-97){
             if(min_d>rv.dis){
                 min_d = rv.dis;
                 f = rv.path;
             }
             continue;
        }
        for(int k=0;k<=7;k++){
            m= rv.i+x[k];
            n= rv.j+y[k];
            if(valid(m,n) && visited[m][n]==0){
                if(k==0){
                   vector<string> p = rv.path;
                   p.push_back("LU");
                   node nn = {m,n,rv.dis+1,p};
                   visited[m][n]=1;
                   q.push(nn);
                }
                else if(k==1){
                    vector<string> p = rv.path;
                   p.push_back("U");
                   node nn = {m,n,rv.dis+1,p};
                   visited[m][n]=1;
                   q.push(nn);
                }
                else if(k==2 ){
                    vector<string> p = rv.path;
                   p.push_back("RU");
                   node nn = {m,n,rv.dis+1,p};
                   visited[m][n]=1;
                   q.push(nn);
                }
                else if(k==3){
                    vector<string> p = rv.path;
                   p.push_back("L");
                   node nn = {m,n,rv.dis+1,p};
                   visited[m][n]=1;
                   q.push(nn);
                }
                else if(k==4){
                    vector<string> p = rv.path;
                   p.push_back("R");
                   node nn = {m,n,rv.dis+1,p};
                   visited[m][n]=1;
                   q.push(nn);
                }
                else if(k==5){
                    vector<string> p = rv.path;
                   p.push_back("LD");
                   node nn = {m,n,rv.dis+1,p};
                   visited[m][n]=1;
                   q.push(nn);
                }
                else if(k==6){
                    vector<string> p = rv.path;
                   p.push_back("D");
                   node nn = {m,n,rv.dis+1,p};
                   visited[m][n]=1;
                q.push(nn);
                }
                else if(k==7){
                    vector<string> p = rv.path;
                   p.push_back("RD");
                   node nn = {m,n,rv.dis+1,p};
                   visited[m][n]=1;
                   q.push(nn);
                }
            }
        }
    }
    
    cout<<min_d<<"\n";
    for(int i =0;i<f.size();i++){
        cout<<f[i]<<"\n";
    }
    
    return 0;
}