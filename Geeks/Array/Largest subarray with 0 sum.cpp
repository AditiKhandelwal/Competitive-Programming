int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,vector<int> > m;
    int sum =0;
    for(int i =0;i<n;i++){
        sum+=A[i];
        m[sum].push_back(i);
    }
    int max=0;
    int curr_sum=0;
    for(int i =0;i<n;i++){
        curr_sum +=A[i];
        if(m.find(curr_sum)!=m.end()){
            for(int j =0;j<m[curr_sum].size();j++){
                if(max<abs(i-m[curr_sum][j])){
                    max = abs(i-m[curr_sum][j]);
                }
            }
        }
        if(curr_sum==0){
            if(max<i+1){
                max=i+1;
            }
        }
    }
    return max;
}
