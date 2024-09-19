//INORDER---> LEFT->ROOT->RIGHT     TC: O(N) AND SC: O(N)
vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        //left
        vector<int>left = inorderTraversal(root->left);
        ans.insert(ans.end(),left.begin(),left.end());
        //root
        ans.push_back(root->val);
        //right
         vector<int>right = inorderTraversal(root->right);
        ans.insert(ans.end(),right.begin(),right.end());

        return ans;
    }
