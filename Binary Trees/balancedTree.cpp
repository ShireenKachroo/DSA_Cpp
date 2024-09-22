class Solution {
public:
    int getHeightDiff(TreeNode* root){
        if(root == NULL) return 0;
        int leftHeight = getHeightDiff(root->left);
        int rightHeight = getHeightDiff(root->right);
        if(leftHeight == -1 || rightHeight == -1) return -1;
        if (abs(leftHeight - rightHeight)> 1) return -1;
        return 1+max(leftHeight,rightHeight);
    } 
    bool isBalanced(TreeNode* root) {
        //difference between heights of leftHalf, rightHalf is at max 1;
        int diff = getHeightDiff(root);
        if(diff == -1) return false;
        return true;
    }
};
