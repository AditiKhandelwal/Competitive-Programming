class Solution
{
    public:
    void deleteE(stack<int>&s, int n,int curr){
        if(curr==0){
            return;
        }
        int e =s.top();
        s.pop();
        deleteE(s,n,curr-1);
        if(n%2==0){
            if(curr!=(n/2)){
            s.push(e);
           }
        }
        else{
            if(curr!=((n+1)/2)){
                s.push(e);
            }
        }
            
        
       
    }
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        deleteE(s,sizeOfStack,sizeOfStack);
    }
};