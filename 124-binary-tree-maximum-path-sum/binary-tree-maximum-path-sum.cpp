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
    int maxsum;
    int solve(TreeNode* root){
        if(root==NULL) return 0;

        int l = solve(root->left);
        int r = solve(root->right);

        int saare_ache = l + r + root->val;
        int only_ek_acha = max(l,r) + root->val;
        int only_root_acha = root->val;

        maxsum = max({maxsum,saare_ache,only_ek_acha,only_root_acha});

        return max(only_ek_acha,only_root_acha);

    }
    int maxPathSum(TreeNode* root) {
        maxsum = INT_MIN;
        solve(root);

        return maxsum;
    }
};