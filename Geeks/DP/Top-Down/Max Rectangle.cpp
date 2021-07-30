class Solution{
  public:
    int hist(int m, int arr[]){
        stack<int> s;
        int area=0;
        int max_a= 0;
        int i =0;
        int top=0;
        while(i<m){
            if(s.empty()|| arr[s.top()]<=arr[i]){
                s.push(i++);
            }
            else{
                top = s.top();
                s.pop();
                area = arr[top]*(s.empty()?i:i-s.top()-1);
                if(area>max_a){
                    max_a=area;
                }
            }
        }
        while(!s.empty()){
            top = s.top();
                s.pop();
                area = arr[top]*(s.empty()?i:i-s.top()-1);
                if(area>max_a){
                    max_a=area;
                }
        }
        return max_a;
    }
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        int dp[n][m];
        int max_area=0;
        for(int i =0;i<m;i++){
            dp[0][i]=M[0][i];
        }
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0)
                 break;
                if(M[i][j]==1){
                    dp[i][j]=dp[i-1][j]+1;
                }
                else{
                    dp[i][j]=0;
                }
            }
           max_area = max(max_area,hist(m,dp[i]));
        }
        return max_area;
    }
};