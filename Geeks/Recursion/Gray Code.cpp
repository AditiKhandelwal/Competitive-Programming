class Solution
{
    public:
    vector<string> graycode(int n)
    {
        //code here
       if (n <= 0)
        return {"0"};
 
        if (n == 1)
        {
          return {"0","1"};
        }
     
        //Recursive case
        vector<string> rec= graycode(n-1);
        vector<string> ans;
        
        for(int i=0;i<rec.size();i++)
        {
          string s=rec[i];
          ans.push_back("0"+s);
        }
         
        for(int i=rec.size()-1;i>=0;i--)
        {
           string s=rec[i];
           ans.push_back("1"+s);
        }
        return ans;
    }
};