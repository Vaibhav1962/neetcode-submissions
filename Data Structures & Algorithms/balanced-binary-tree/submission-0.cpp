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
    int ans=0;
public:
    int height(TreeNode *root)
    {
        if(!root)return 0;

        int left=height(root->left);
        int right=height(root->right);

        if(abs(left-right)>1)ans=1;

        return 1+max(left,right);
    }
    bool isBalanced(TreeNode* root) {
        height(root);

        return ans==0?true:false;
        
    }
};
