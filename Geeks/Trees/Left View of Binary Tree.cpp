/* A binary tree node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

//Function to return a list containing elements of left view of the binary tree.
vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ans;
   if(!root){
       return ans;
   }
   queue<Node*> q;
   q.push(root);
   
   while(!q.empty()){
       int n = q.size();
       for(int i=1;i<=n;i++){
           Node* rv = q.front();
           q.pop();
           if(i==1){
               ans.push_back(rv->data);
           }
           if(rv->left!=NULL){
               q.push(rv->left);
           }
           if(rv->right!=NULL){
               q.push(rv->right);
           }
       }
   }
   return ans;
}