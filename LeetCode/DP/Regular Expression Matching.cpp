class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<int> > dp(s.length()+1,vector<int>(p.length()+1,0));
        dp[0][0]=1;
        for(int i=1;i<=s.length();i++){
            dp[i][0]=0;
        }
        for(int j =1;j<=p.length();j++){
            if(j>1 && p[j-1]=='*'){
                dp[0][j]=dp[0][j-2];
            }
        }
        for(int i =1;i<=s.length();i++){
            for(int j=1;j<=p.length();j++){
                if(p[j-1]=='*'){
                    if(s[i-1]==p[j-2] || p[j-2]=='.'){
                        dp[i][j]=  dp[i-1][j] || dp[i][j-2];
                    }
                    else{
                        dp[i][j]=dp[i][j-2];
                    }
                }
                else if(s[i-1]==p[j-1] || p[j-1]=='.'){
                    dp[i][j]=dp[i-1][j-1];
                }
                else{
                    dp[i][j]=0;
                }
            }
        }
        return dp[s.length()][p.length()];
        
    }
};

