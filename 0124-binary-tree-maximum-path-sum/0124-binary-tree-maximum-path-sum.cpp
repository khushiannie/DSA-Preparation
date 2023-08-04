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
    int sum=INT_MIN;
    int func(TreeNode* root){
        if(root==NULL){
            return 0;
        }
       int lsum=max(0,func(root->left));
       int  rsum=max(0,func(root->right));
        sum=max(sum,lsum+rsum+root->val);
        return root->val+max(lsum,rsum);
        
    }
    int maxPathSum(TreeNode* root) {
         func(root);
        return sum;
    }
};