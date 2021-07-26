class Solution{
	public:

		int min_operations(vector<int>nums){
		    // Code here
		    int n = nums.size();
		    vector<int> dp(n,1);
		    for(int i =1;i<n;i++){
		        for(int j =0;j<i;j++){
		            if(nums[j]<nums[i] && (i-j)<=(nums[i]-nums[j])){
		                dp[i]=max(dp[i],dp[j]+1);
		            }
		        }
		    }
		    return n - *max_element(dp.begin(),dp.end());
		}
};