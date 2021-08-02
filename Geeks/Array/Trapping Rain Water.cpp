class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        // Code here
        int left[n];
        int right[n];
        int max_v =INT_MIN;
        for(int i =0;i<n;i++){
            max_v = max(max_v,arr[i]);
            left[i]=max_v;
        }
        max_v =INT_MIN;
        for(int i =n-1;i>=0;i--){
            max_v = max(max_v,arr[i]);
            right[i]=max_v;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+= min(left[i],right[i])-arr[i];
        }
        return ans;
    }
};