class Solution{
    public:
        
    // arr[]: input array
    // n: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int arr[], int n) 
    { 
        
        // Your code here
        unordered_map<int, vector<int> > m;
        for(int i =0;i<n;i++){
            m[arr[i]].push_back(i);
        }
        int maxDiff =INT_MIN;
        int temp =n;
        sort(arr,arr+n);
         for (int i = 0; i < n; i++) {
        if (temp > m[arr[i]][0]) {
            temp = m[arr[i]][0];
        }
        maxDiff = max(
            maxDiff,
            m[arr[i]][m[arr[i]].size() - 1]
                - temp);
    }
    return maxDiff;
    }
};