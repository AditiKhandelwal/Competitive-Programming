class Solution 
{
    public:
    //Function to find minimum number of pages.
    int valid(int arr[],int n,int m,int mid){
        int s=1;
        int sum=0;
        for(int i =0;i<n;i++){
            sum+=arr[i];
            if(sum>mid){
                s++;
                sum=arr[i];
            }
            if(s>m){
                return false;
            }
        }
        return true;
    }
    int findPages(int arr[], int n, int m) 
    {
        //code here
        if(n<m){
            return -1;
        }
        int start = *max_element(arr,arr+n);
        int end =0;
        for(int i =0;i<n;i++){
            end+=arr[i];
        }
        int res=-1;
        int mid;
        while(start<=end){
             mid = start + (end-start)/2;
            if(valid(arr,n,m,mid)){
                res=mid;
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
       return res;
    }
};