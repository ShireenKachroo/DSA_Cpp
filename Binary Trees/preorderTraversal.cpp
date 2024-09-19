//PREORDER---> ROOT->LEFT->RIGHT      TC: O(N) AND SC O(N)

vector<int> preorderTraversal(TreeNode* root) {
        vector<int>pre;
        if(root == NULL) return pre;
        //root
        pre.push_back(root->val);
        //left
        vector<int>left = preorderTraversal(root->left);
        pre.insert(pre.end(), left.begin(), left.end());
        //right
        vector<int>right = preorderTraversal(root->right);
        pre.insert(pre.end(), right.begin(), right.end());
        return pre;
    }
