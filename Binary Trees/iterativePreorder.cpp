class Solution {
public:
        /*iterative approach using stack  TC:O(N) SC:O(N)*/
        vector<int>pre;
        if(root == NULL) return pre;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            pre.push_back(root->val);
            if(root->right) st.push(root->right);
            if(root->left)  st.push(root->left);
        }
        return pre;
    }
