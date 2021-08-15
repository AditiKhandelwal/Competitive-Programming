class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    if(n==1){
	        return arr[0];
	    }
	    long long curr_max=1;
	    long long curr_min =1;
	    long long max_t =0;
	    int positive=0;
	    for(int i =0;i<n;i++){
	        if(arr[i]>0){
	            curr_max*=arr[i];
	            if(curr_min*arr[i]<1){
	                curr_min =curr_min*arr[i];
	            }
	            else{
	                curr_min=1;
	            }
	            
	            positive=1;
	        }
	        else if(arr[i]==0){
	            curr_max=1;
	            curr_min=1;
	        }
	        else{
	            long long int temp = curr_max;
	           
	              if(curr_min*arr[i]>1){
	                curr_max =curr_min*arr[i];
	            }
	            else{
	                curr_max=1;
	            }
	             
	                curr_min =temp*arr[i];
	            
	          
	        }
	        if(max_t<curr_max){
	            max_t=curr_max;
	        }
	    }
	    if(positive==0 && max_t==0){
	        return 0;
	    }
	    return max_t;
	}
};