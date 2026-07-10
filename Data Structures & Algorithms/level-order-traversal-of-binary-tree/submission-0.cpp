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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>>ans;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        while(!q.empty())
        {
            auto [node,level] = q.front();
            q.pop();

            if(ans.size()==level)
            {
                ans.push_back(vector<int>());
            }
            ans[level].push_back(node->val);

            if(node->left) q.push({node->left,level+1});
            if(node->right)q.push({node->right,level+1});
        }

        return ans;
        
    }
};
