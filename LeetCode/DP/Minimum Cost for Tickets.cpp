class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int dp[days.size()];
        memset(dp,0,sizeof dp);
        dp[0]=costs[0];
        for(int i =1;i<days.size();i++){
            dp[i]=dp[i-1]+costs[0];
        }
        int j =0;
        for(int i =0;i<days.size();i++){
            j=i-1;
            while( j>=0 && days[i]-days[j]<7){
                j--;
            }
            if(j>=0){
                dp[i]= min(min(dp[i], dp[j]+costs[1]),dp[i-1]+costs[0]);
            }
            
             if(j==-1 ){
                 dp[i]= min(dp[i], costs[1]);
             }
            j=i-1;
            while( j>=0 && days[i]-days[j]<30 ){
                j--;
            }
            if(j>=0){
                dp[i]= min(min(dp[i], dp[j]+costs[2]), dp[i-1]+costs[0]);
            } 
            
             if(j==-1 ){
                 dp[i]= min(dp[i], costs[2]);
             }
        }
        return dp[days.size()-1];
    }
};