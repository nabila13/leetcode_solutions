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
vector<int>v;
void printPreOrder(TreeNode* root){
    if(root==NULL){
        return;
    }
    v.push_back(root->val);
    printPreOrder(root->left);
    printPreOrder(root->right);
}
    vector<int> preorderTraversal(TreeNode* root) {
        printPreOrder(root);

        return v;
    }
};
