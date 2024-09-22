vector<int> inorderTraversal(TreeNode* root) {

        /*iterative approach*/
        vector<int>ans;
        stack<TreeNode*>st;
        TreeNode* node = root;
        while(true){
            if(node != NULL){
                st.push(node);
                node->left;
            }
            else{
                if(st.empty()) break;
                node = st.top();
                st.pop();
                ans.push_back(node->val);
                node = node->right;
            }
        }
        return ans;
}
