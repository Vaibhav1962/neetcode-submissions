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

class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(!root) return "#";

        string s ="";
        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty())
        {
            auto node = q.front();
            q.pop();

            if(node == NULL) s+="#,";

            else
            {
                s+=to_string(node->val)+',';
            }

            if(node!=NULL)
            {
                q.push(node->left);
                q.push(node->right);
            }
        }

        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        if(data.size() == 0 ) return NULL;
        if(data == "#") return NULL;

        stringstream s(data);
        queue<TreeNode*>q;
        string temp;
        getline(s,temp,',');

        TreeNode* root = new TreeNode(stoi(temp));
        q.push(root);

        while(!q.empty())
        {
            auto node = q.front();
            q.pop();

            getline(s,temp,',');
            if(temp == "#")
            {
                node->left = NULL;
            }
            else
            {
                node->left = new TreeNode(stoi(temp));
                q.push(node->left);
            }

            getline(s,temp,',');

            if(temp == "#")
            {
                node->right = NULL;
            }
            else
            {
                node->right = new TreeNode(stoi(temp));
                q.push(node->right);
            }
        }

        return root;
        
    }
};
