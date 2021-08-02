/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        //code here
        vector<int> ans;
        stack<Node*> s;
        if(root!=NULL){
            s.push(root);
            root=root->left;
            while(!s.empty() || root ){
                if(root!=NULL){
                    s.push(root);
                    root=root->left;
                }
                else{
                    Node *r = s.top();
                    s.pop();
                    ans.push_back(r->data); 
                    root=r->right;
                }
            }
        }
        return ans;
    }
};