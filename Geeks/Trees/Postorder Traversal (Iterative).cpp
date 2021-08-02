// User function Template for C++

/* Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};*/
vector<int> postOrder(Node* node) {
    // code here
    vector<int> ans;
    stack<Node*> s;
    if(node!=NULL){
        while(!s.empty() || node){
            if(node){
                ans.push_back(node->data);
                s.push(node);
                node=node->right;
            }
            else{
                Node *r = s.top();
                s.pop();
                node=r->left;
            }
        }
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}