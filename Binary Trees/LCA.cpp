class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* a, TreeNode* b) {
        if(root == NULL) return NULL; //no LCA possible
        if(root == a || root == b) return root; //this is LCA
        TreeNode* left = lowestCommonAncestor(root->left,a,b);
        TreeNode* right = lowestCommonAncestor(root->right,a,b);
        if(left && right) return root;
        if(left) return left;
        if(right) return right;
        return NULL;
    }
};
