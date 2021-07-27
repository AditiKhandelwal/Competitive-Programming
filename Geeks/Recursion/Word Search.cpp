class Solution {
public:
   
    bool find(vector<vector<char>>& board, string word, int i, int j, int index){
         if(index == word.size()){
            return true;
        }
         if(i<0 || j<0 || i>=board.size() || j>=board[0].size() ){
            return false;
        }
        if(board[i][j]==word[index]){
            char temp = board[i][j];
            board[i][j]='@';
            bool ans = find(board,word,i+1,j,index+1) ||  find(board,word,i-1,j,index+1) ||
                        find(board,word,i,j+1,index+1) ||  find(board,word,i,j-1,index+1)  ;
            board[i][j]=temp;
            return ans;
        }
        else{
            return false;
        }
        
    }
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        
        for(int i =0;i<board.size();i++){
            for(int j =0;j<board[0].size();j++){
                if(board[i][j]==word.at(0)){
                    if(find(board, word , i,j,0)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};