class Solution
{
    public:
    bool solve(Node *root, int S, int check){
      if(root == NULL){
        if(check==S){
            return true;
        }
        return false;
    }
    if(solve(root->left,S,check+root->data) || solve(root->right,S,check+root->data))
    {
        return true;
    }
    else{
        return false;
    }
    return false;
    }
    bool hasPathSum(Node *root, int S) {
    // Your code here
    
    return solve(root , S, 0);
}
};