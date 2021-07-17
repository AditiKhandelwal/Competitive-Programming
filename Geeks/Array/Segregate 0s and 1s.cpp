class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        // code here
        int i=0;int j =0;
        while(j<n){
            if(arr[j]==0){
                if(i<j){
                   arr[i]=0;
                   arr[j]=1;
                }
                while(arr[i]==0){
                    i++;
                }
                
                j++;
            }
            else if(arr[j]==1){
                j++;
            }
        }
    }
};