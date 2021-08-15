void sort012(int arr[], int n)
{
    int lo=0;
    int mid=0;
    int hi =n-1;
    for(mid=0;mid<n;mid++ ){
        if(arr[mid]==0){
            if(lo<mid){
            int temp =arr[mid];
            arr[mid]=arr[lo];
            arr[lo]=temp;
            mid--;
            }
            lo++;
            
        }
        else if(arr[mid]==2){
            if(mid<hi){
            int temp =arr[mid];
            arr[mid]=arr[hi];
            arr[hi]=temp;
              hi--;
              mid--;
            }
          
        }
        else{
            continue;
        }
    }
}