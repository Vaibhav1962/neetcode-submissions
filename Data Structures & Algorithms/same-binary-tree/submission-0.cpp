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
    bool same = true;
public:
    void traverseTrees(TreeNode* p,TreeNode *q)
    {
        if(!p && !q) return;
        if(!p || !q)
        {
            same=false;
            return;
        }
        if(p->val != q->val)
        {
            same=false;
            return;
        }
        traverseTrees(p->left,q->left);
        traverseTrees(p->right,q->right);
        return;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        traverseTrees(p,q);

        return same;
        
    }
};
