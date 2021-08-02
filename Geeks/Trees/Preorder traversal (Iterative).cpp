//User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};
*/

vector<int> preOrder(Node* root)
{
    //code here
    vector<int> ans;
    stack<Node*> s;
    if(root!=NULL){
        s.push(root);
        while(!s.empty()){
            Node *r = s.top();
            s.pop();
            ans.push_back(r->data);
            if(r->right!=NULL){
                s.push(r->right);
            }
            if(r->left!=NULL){
                s.push(r->left);
            }
            
        }
    }
    return ans;
}