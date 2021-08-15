
/* Function to print corner node at each level */

/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
void printCorner(Node *root)
{

// Your code goes here
queue<Node*> q;
q.push(root);
int n ;
while(!q.empty()){
    n = q.size();
    for(int i =0;i<n;i++){
        Node* rv = q.front();
        q.pop();
        if(i==0 || i==n-1){
            cout<<rv->data<<" ";
        }
        if(rv->left){
            q.push(rv->left);
        }
        if(rv->right){
            q.push(rv->right);
        }
    }
}

}