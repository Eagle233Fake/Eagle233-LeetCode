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
        int minDepth(TreeNode* root) {
            queue<TreeNode *> q;
            int depth = 0;
            if (root != nullptr) {
                q.push(root);
            }
    
            while (!q.empty()) {
                int size = q.size();
                depth++;
                for (int i = 0; i < size; i++) {
                    TreeNode *node = q.front();
                    q.pop();
                    if (node->left != nullptr) {
                        q.push(node->left);
                    }
                    if (node->right != nullptr) {
                        q.push(node->right);
                    }
    
                    if (node->left == nullptr && node->right == nullptr) {
                        return depth;
                    }
                }
            }
            return depth;
        }
    };