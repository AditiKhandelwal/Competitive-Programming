class Solution{
    public:
    int count4Divisibiles(int arr[], int n)
    {
        // Complete the function
        int ans =0;
        unordered_map<int,int> m;
        for(int i =0;i<n;i++){
            m[arr[i]%4]++;
        }
        ans += (m[0]*(m[0]-1))/2;
        for(int i =1;i<=4/2;i++){
            if(i==(4-i)){
                ans += (m[i]*(m[i]-1))/2;
            }
            else{
                ans += (m[i]*m[4-i]);
            }
        }
        
        return ans;
    }
};