class Solution
{
    public:
    //Function to find the maximum money the thief can get.
    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        int inc = arr[0];
        int exc = 0;
        int temp ;
        for(int i =1;i<n;i++){
           temp = max(inc,exc);
            inc = exc+arr[i];
            exc = temp;
        }
        return max(exc,inc);
    }
};