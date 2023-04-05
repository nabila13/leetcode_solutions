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
void printPostOrder(TreeNode* root){
    if(root==NULL){
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    v.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        printPostOrder(root);

        return v;
    }
};
