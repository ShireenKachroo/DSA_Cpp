//convert a BT to its  mirror image

TreeNode* invertTree(TreeNode* root) {
        if(root == NULL) return nullptr;
  
        TreeNode*temp =root->left;
        root->left = root->right;
        root->right = temp;

        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
