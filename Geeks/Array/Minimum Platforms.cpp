class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int stations=1;
    	int ans =1;
    	int j =0;
    	int i =1;
    	while(i<n && j<n){
    	    if(arr[i]<=dep[j]){
    	        stations++;
    	        i++;
    	    }
    	    else if(arr[i]>dep[j]){
    	        stations--;
    	        j++;
    	    }
    	    ans = max(ans,stations);
    	}
    	
    	return ans;
    }
};