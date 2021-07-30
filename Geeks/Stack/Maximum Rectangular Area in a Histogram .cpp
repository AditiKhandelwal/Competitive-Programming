class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        stack<int> s;
        long long int max =0;
        long long int area =0;
        int i =0;
        int top=0;
        while(i<n){
            if(s.empty() || arr[s.top()]<arr[i]){
                s.push(i);
                i++;
            }
            else{
                top = s.top();
                s.pop();
                area=arr[top]*(s.empty()?i:i-s.top()-1);
                if(max<area){
                    max=area;
                }
            }
        }
        while(!s.empty()){
            top = s.top();
                s.pop();
                area=arr[top]*(s.empty()?i:i-s.top()-1);
                if(max<area){
                    max=area;
                }
        }
        return max;
    }
};