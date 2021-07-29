
class Solution {
public:
    static bool compareFunc(vector<int> a, vector<int> b){
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),compareFunc);
        int units=0;
        int i=0;
        while(truckSize!=0 && i<boxTypes.size()){
            if(boxTypes[i][0]<=truckSize){
                units+=boxTypes[i][0]*boxTypes[i][1];
                truckSize -=boxTypes[i][0];
            }
            else{
                units+=truckSize*boxTypes[i][1];
                truckSize =0;
            }
            i++;
        }
        return units;
    }
};