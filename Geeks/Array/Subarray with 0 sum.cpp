// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;


bool subArrayExists(int arr[], int n);
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    	if (subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}// } Driver Code Ends


//Complete this function
bool subArrayExists(int arr[], int n)
{
    //Your code here
    unordered_map<int,int> m;
    int sum =0;
    if(count(arr,arr+n,0)!=0)
    {
        return true;
    }
    for(int i =0;i<n;i++)
    {
        sum+=arr[i];
        if(sum==0)
        {
            return true;
        }
        else if(m.find(sum)!=m.end())
        {
            return true;
        }
        m[sum]=i;
        
    }
	 return false;  
}