class Solution {
public:
    int height(TreeNode* node, int &diam){
        if(node == NULL) return 0;
        int lh = height(node->left,diam);
        int rh = height(node->right,diam);
        diam = max(diam, lh+rh);
        return 1+max(lh,rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diam = 0;
        height(root,diam);
        return diam;
    }
};
