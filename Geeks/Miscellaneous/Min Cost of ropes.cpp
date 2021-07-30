class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int j =m-1;
	    int max_index=0;
	    bool check = false;
	    for(int i=0;i<n;i++){
	        check=false;
	        while(j>=0 && arr[i][j]==1){
	            j=j-1;
	            check=true;
	        }
	        if(check==true){
	            max_index=i;
	        }
	    }
	    if(max_index==0 && arr[0][m-1]==0){
	        return -1;
	    }
	    return max_index;
	}

};