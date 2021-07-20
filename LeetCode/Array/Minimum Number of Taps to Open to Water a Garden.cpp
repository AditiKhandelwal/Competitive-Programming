class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        vector<pair<int,int> > water;
        for(int i =0;i<ranges.size();i++){
            water.push_back(pair<int,int>(i-ranges[i],i+ranges[i]));
        }
        sort(water.begin(),water.end());
        int maxR=0;
        int ans =0;
        int i =0;
        while(maxR<n){
            if(i==water.size() || water[i].first>maxR)
                return -1;
            int curr = water[i].second;
            while(i+1<water.size() && water[i+1].first<=maxR){
                curr = max(curr,water[i+1].second);
                i++;
            }
            if(curr<maxR){
                return -1;
            }
            maxR= curr;
            ans++;
            i++;
        }
        return ans;
        
    }
};