class Solution {
  public:
    string longestPalin (string S) {
        // code here
        int n = S.length();
        int dp[n][n];
        int j=0;
        int max_length =1;
        int s=0;
        memset(dp,0,sizeof dp);
        for(int i =0;i<n;i++){
            dp[i][i]=1;
        }
        for(int i=0;i<n-1;i++){
            if(S[i]==S[i+1]){
                dp[i][i+1]=1;
                if(max_length == 1){
                s = i;
                max_length = 2;
            }
            else{
                s = min(i, s);
                max_length = 2;
            }
            }
        }
        for(int l =3;l<=n;l++){
            for(int i =0;i<n-l+1;i++){
                j=i+l-1;
                if(dp[i+1][j-1]==1 && S[i]==S[j] ){
                    dp[i][j]=1;
                    if(max_length<l){
                        max_length=l;
                        s=i;
                    }
                    else if(l == max_length){
                    s = min(i , s);
                }
                    
                }
                
            }
        }
        return S.substr(s,max_length);
    }
};