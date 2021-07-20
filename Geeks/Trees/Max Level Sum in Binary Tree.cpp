class Solution{
  public:
    /*You are required to complete below method */
    int maxLevelSum(Node* root) {
        // Your code here
        queue<Node*> q;
        int max = INT_MIN;
        int sum =0;
        int count =0;
        q.push(root);
        while(!q.empty()){
            count = q.size();
            sum=0;
            while(count--){
                Node *rv = q.front();
                q.pop();
                sum=sum+rv->data;
                if(rv->left!=NULL){
                    q.push(rv->left);
                }
                if(rv->right!=NULL){
                    q.push(rv->right);
                }
            }
            if(sum>max){
                max = sum;
            }
        }
        return max;
    }
};