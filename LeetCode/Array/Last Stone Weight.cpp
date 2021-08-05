class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(int i =0;i<stones.size();i++){
            p.push(stones[i]);
        }
        int x,y=0;
        while(p.size()>1){
            x= p.top();
            p.pop();
            y= p.top();
            p.pop();
            if(x!=y){
                p.push(abs(x-y));
            }
        }
        if(p.size()){
            return p.top();
        }
        return 0;
        
    }
};