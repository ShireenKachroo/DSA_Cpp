class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int leftHt = maxDepth(root->left);
        int rightHt = maxDepth(root->right);
        return 1+ max(leftHt,rightHt);
    }
};
