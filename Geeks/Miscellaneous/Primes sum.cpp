class Solution {
  public:
    bool isPrime(int x){
        for(int i =2;i*i<=x;i++){
            if(x%i==0){
                return false;
            }
        }
        return true;
    }
    string isSumOfTwo(int N){
        // code here
        if(N%2==0){
            return "Yes";
        }
        return isPrime(N-2)?"Yes":"No";
    }
};