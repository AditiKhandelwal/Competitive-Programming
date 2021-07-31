using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i =0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int max =0;
	    int max_end=0;
	    for(int i =0;i<n;i++)
	    {
	        max_end+=arr[i];
	        if(max<max_end)
	        {
	            max=max_end;
	        }
	        if(max_end<0)
	        {
	            max_end=0;
	        }
	    }
	    if(max!=0)
	    cout<<max<<"\n";
	    else
	    cout<<*max_element(arr,arr+n)<<"\n";
	}
	return 0;
}