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
    int maxi = INT_MIN;

   public:
    int maxSum(TreeNode* root) {
        if (!root) return 0;

        int left = maxSum(root->left);
        int right = maxSum(root->right);

        left = max(left, 0);
        right = max(right, 0);

        maxi = max(maxi, left + right + root->val);

        return root->val + max(left, right);
    }
    int maxPathSum(TreeNode* root) {
        maxSum(root);

        return maxi;
    }
};
