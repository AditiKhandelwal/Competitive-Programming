class Solution
{
    public:
    void paren(int n, int open, int close,vector<string> &ans, string s){
        
        if(close == n || s.size()==2*n){
           ans.push_back(s);
            return;
        }
        else{
            if(open>close){
                paren(n,open,close+1,ans, s+')');
            }
            if(open<n){
                paren(n,open+1,close,ans,s+'(');
            }
        }
        return;
    }
    vector<string> AllParenthesis(int n) 
    {
        // Your code goes here 
        vector<string> ans;
        string s="";
        paren(n,0,0,ans,s);
        
        return ans;
    }
};