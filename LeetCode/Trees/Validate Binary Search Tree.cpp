/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool valid(TreeNode* root, long long int min, long long int max){
        if(root->val<=min || root->val >=max){
           return false; 
        }
        if(root==NULL){
            return true;
        }
        bool check1=true;
        bool check2=true;
        if(root->left!=NULL){
            check1 = valid(root->left,min,root->val);
        }
        if(root->right!=NULL){
            check2 = valid(root->right,root->val,max);
        }
        if(check1 && check2){
            return true;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MIN,LONG_MAX);
    }
};