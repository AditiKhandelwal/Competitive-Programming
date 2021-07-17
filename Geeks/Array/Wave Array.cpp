class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(vector<int>& arr, int n){
        
        // Your code here
        int temp=0;
        for(int i =0;i<n;i=i+2){
            if(i>0 && arr[i-1]>arr[i] ){
                temp = arr[i];
                arr[i]=arr[i-1];
                arr[i-1]=temp;
            }
            if(i<n-1 && arr[i+1]>arr[i] ){
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
            
        }
        
    }
};