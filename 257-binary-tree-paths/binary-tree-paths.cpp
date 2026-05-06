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
    void pathHelper(TreeNode* root, vector<string> &ans, string str){
        if(root == NULL){
            return;
        }

        if(root->left == NULL && root->right == NULL){
            str += to_string(root->val);
            ans.push_back(str);
            return;
        }

        str+=to_string(root->val);
        str+="->";
        pathHelper(root->left,ans,str);
        pathHelper(root->right,ans,str);
    } 
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string str = "";
        pathHelper(root,ans,str);  
        return ans;
    }
};