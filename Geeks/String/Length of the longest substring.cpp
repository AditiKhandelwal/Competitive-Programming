class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int ans = 0;
        int len =0;
        int i =0;int j =0;
        vector<bool> m(26,false);
        while(j<S.length()){
            if(m[S[j]-90]==false){
                len = j-i+1;
                if(len>ans){
                    ans = len;
                }
                m[S[j]-90]=true;
                j++;
            }
            else{
                m[S[i]-90]=false;
                i++;
            }
        }
        return ans;
        
    }
};