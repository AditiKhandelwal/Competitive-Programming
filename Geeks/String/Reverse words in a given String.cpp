class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        int n = S.length();
        string str="";
        string ans ="";
        vector<string> v;
        for(int i =0;i<n;i++){
            if(S.at(i)=='.'){
                v.push_back(str);
                str="";
            }
            else{
                str+=S.at(i);
            }
        }
        v.push_back(str);
        for(int i =v.size()-1;i>=0;i--){
            if(i!=0)
            ans=ans+v[i]+".";
            else
            ans=ans+v[i];
        }
        return ans;
    } 
};