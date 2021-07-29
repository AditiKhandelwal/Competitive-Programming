class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
         sort(A,A+n);
        int p1,p2;
        int curr_sum=0;
        for(int i =0;i<n-2;i++){
            p1=i+1;
            p2=n-1;
            while(p1<p2){
                curr_sum=A[i]+A[p1]+A[p2];
                if(curr_sum==X){
                    return true;
                }
                else if(curr_sum<X){
                    p1++;
                }
                else{
                    p2--;
                }
            }
        }
        return false;
    }

};