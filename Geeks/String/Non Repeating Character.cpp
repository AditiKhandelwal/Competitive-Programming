
class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string s)
    {
       //Your code here
       unordered_map<char,int> m;
       int ind=s.length();
       char ans ='$';
       for(int i =0;i<s.length();i++){
           m[s.at(i)]++;
       }
       for(auto it = m.begin();it!=m.end();++it){
           if(it->second==1){
               if(ind > s.find(it->first)){
                   ind =s.find(it->first);
                   ans = it->first;
               }
           }
       }
       return ans;
    }

};