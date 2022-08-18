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
    bool isBalanced(TreeNode* root) {
        if(root == NULL) {
            return true;
        }
        return isBalanced(root->left) && isBalanced(root->right) && (abs(ch(root->left)- ch(root->right)) <=1);
    }
    int ch(TreeNode* root) {
        int c =0;
        if(root != NULL) {
            c = max(ch(root->left), ch(root->right)) +1;
        }
        return c;
    }
};
