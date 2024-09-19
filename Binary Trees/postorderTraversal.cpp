//POST ORDER--> LEFT->RIGHT->ROOT    TC:O(N)  SC:O(N)
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root == NULL) return ans;
        //left
        vector<int>left = postorderTraversal(root->left);
        ans.insert(ans.end(),left.begin(),left.end());
        //right
        vector<int>right = postorderTraversal(root->right);
        ans.insert(ans.end(),right.begin(),right.end());
        //root
        ans.push_back(root->val);
        return ans;
    }
