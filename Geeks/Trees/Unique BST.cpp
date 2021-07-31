class Solution
{
    public:
    //Function to return the total number of possible unique BST. 
   int numTrees(int n) 
    {
        // Your code here
        long long int c[n+1];
        c[0]=1;
        c[1]=1;
        for(int i =2;i<=n;i++){
            c[i]=0;
            for(int j =0;j<i;j++){
                long long ans =(c[j]*c[i-j-1])%1000000007;
                c[i]=(c[i]+ans)%1000000007;
            }
        }
        return int(c[n]);
     }
};