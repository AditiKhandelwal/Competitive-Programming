//Node Structure
/*struct Node
{
	int key;
	Node *left, *right;
};*/

class Solution{
  public:
    //Function to return the maximum sum of non-adjacent nodes.
    int getMaxSum(Node *root) 
    {
        // Add your code here
        if(root==NULL){
            return 0;
        }
        int include = root->data ;
        if(root->left){
            include+= getMaxSum(root->left->left)+getMaxSum(root->left->right);
        }
        if(root->right){
            include+= getMaxSum(root->right->left)+getMaxSum(root->right->right);
        }
        int exclude = getMaxSum(root->right)+getMaxSum(root->left);
        return max(include,exclude);
    }
};