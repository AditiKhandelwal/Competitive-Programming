class Solution{
public:

    int steppingNumbers(int n, int m)
    {
        // Code Here
        int ans=0;
        for(int i =n;i<=m;i++){
            if(i>=0 && i<=10){
                ans++;
                continue;
            }
            string s = to_string(i);
            int j=1;
            for( j=1;j<s.size();j++ ){
                if(s.at(j)-s.at(j-1)==1 || s.at(j)-s.at(j-1)==-1 ){
                    continue;
                }
                else{
                    break;
                }
            }
            if(j==s.size()){
                ans++;
            }
        }
        return ans;
    }
};