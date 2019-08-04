//https://www.interviewbit.com/problems/boundary-traversal-of-binary-tree/

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void left(TreeNode* root, vector<int>& A) {
    if(root==NULL) return;
    if(root->left) {A.push_back(root->val);left(root->left,A);}
    else if(root->right) {A.push_back(root->val);left(root->right,A);}
}
void right(TreeNode* root, vector<int>& B) {
    if(root==NULL) return;
    if(root->right) {B.push_back(root->val);right(root->right,B);}
    else if(root->left) {B.push_back(root->val);right(root->left,B);}
}
 
void leaf(TreeNode* root, vector<int>& C){
    if(root==NULL) return;
    leaf(root->left,C);
    if(!root->left && !root->right) C.push_back(root->val);
    leaf(root->right,C);
} 
vector<int> Solution::solve(TreeNode* root) {
    if(root==NULL) return {};
    if(!root->left && !root->right) return {root->val};
    vector<int> A,B,C;
    left(root->left,A);
    leaf(root,C);
    right(root->right,B);
    vector<int> result={root->val};
    result.insert(result.end(),A.begin(),A.end());
    result.insert(result.end(),C.begin(),C.end());
    reverse(B.begin(),B.end());
    result.insert(result.end(),B.begin(),B.end());
    return result;
}
