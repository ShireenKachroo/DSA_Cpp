//construct a BT from inorder ans postorder
class Solution {

    int findMid(vector<int>& inorder, int s, int e, int postS) {
        for (int i = s; i <= e; i++) {
            if (inorder[i] == postS) return i;
        }
        return -1;
    }
    
    TreeNode* buildIt(vector<int>& postorder, vector<int>& inorder, int &postIndex, int s, int e) {
        if (s > e) return nullptr;
        TreeNode* root = new TreeNode(postorder[postIndex]);
        
        int mid = findMid(inorder, s, e, postorder[postIndex]);
        postIndex--;  
        root->right = buildIt(postorder, inorder, postIndex, mid + 1, e);
        root->left = buildIt(postorder, inorder, postIndex, s, mid - 1);
        
        return root;
    }

public:
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.size() == 0 || postorder.size() == 0) return nullptr;
        
        int postIndex = postorder.size() - 1;
        return buildIt(postorder, inorder, postIndex, 0, inorder.size() - 1);
    }
};
