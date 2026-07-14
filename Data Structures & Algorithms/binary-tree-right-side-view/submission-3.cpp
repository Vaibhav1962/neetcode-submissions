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
    vector<int>ans;
public:
    void rightSide(TreeNode* root , int vrt)
    {
        if(!root) return;
        if(ans.size() == vrt)
        {
            ans.push_back(-1);
        }
        ans[vrt] = root->val;

        rightSide(root->left,vrt+1);
        rightSide(root->right,vrt+1);
    }
    vector<int> rightSideView(TreeNode* root) {

        rightSide(root,0);
        return ans;        
    }
};
