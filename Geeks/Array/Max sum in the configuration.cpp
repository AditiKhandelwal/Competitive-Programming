/*You are required to complete this method*/
int max_sum(int arr[],int n)
{
//Your code here
int total=0,total_product=0,after_rotate=0;
    for(int i=0;i<n;i++)
    {
        total += arr[i];
        total_product += (i*arr[i]);
    }
        int result = total_product;
    for(int i=0;i<n;i++)
    {
        after_rotate = total_product - (total-arr[i]) + (arr[i]*(n-1));
        result = max(result,after_rotate);
        total_product = after_rotate;
    }
         return result;
}