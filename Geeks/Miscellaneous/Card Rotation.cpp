class Solution {
public:    
    vector<int> rotation(int n)
    {
        // Code Heree
        vector<int> ans(n,0);
        int j =0;
        for(int i =1;i<=n;i++){
            int count =-1;
            while(1){
                if(ans[j%n]==0){
                    count++;
                }
                if(count==i){
                    ans[j%n]=i;
                    break;
                }
                j++;
            }
        }
        return ans;
    }
};