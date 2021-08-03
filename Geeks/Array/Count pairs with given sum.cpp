class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int,int> m;
        for(int i =0;i<n;i++){
            m[arr[i]]++;
        }
        int x;
        int ans=0;
        for(int i =0;i<n;i++){
            x = k-arr[i];
            if(m[x]>0){
                if(x==arr[i]){
                    ans+=m[x]-1;
                }
                else
                ans=ans+m[x];
            }
        }
        return ans/2;
    }
};