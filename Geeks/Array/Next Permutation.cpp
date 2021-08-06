class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        // code here
        int i;
        for( i=n-1;i>0;i--){
            if(arr[i-1]<arr[i])
              break;
        }
        if(i==0){
            sort(arr.begin(),arr.end());
            return arr;
        }
        int index=i;
        int min =arr[i];
        for(int j =i;j<n;j++){
            if(min>arr[j] && arr[i-1]<arr[j]){
                min =arr[j];
                index=j;
            }
        }
        int temp = arr[i-1];
        arr[i-1]=arr[index];
        arr[index]=temp;
        sort(arr.begin()+i,arr.end());
        return arr;
    }
};