class Solution
{
    public:
    //Function to search a given number in row-column sorted matrix.
    bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int smallest = matrix[0][0];
        int largest = matrix[n-1][m-1];
        if(x< smallest || x>largest){
            return false;
        }
        int i =0;int j = m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==x){
                return true;
            }
            if(matrix[i][j]<x){
                i++;
            }
            else if(matrix[i][j]>x){
                j--;
            }
        }
        return false;
    }
};