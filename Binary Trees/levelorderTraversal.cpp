vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>level;
            for(int i=0;i<n;i++){
                TreeNode* newNode = q.front();
                q.pop();
                if(newNode->left) q.push(newNode->left);
                if(newNode->right) q.push(newNode->right);
                level.push_back(newNode->val);
            }
            ans.push_back(level);
        }
        return ans;
    }
