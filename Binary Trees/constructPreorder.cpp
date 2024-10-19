//construct a BT from preorder and inorder

class Solution {
    //find index of current root
    int findMid(vector<int>& inorder, int s, int e, int preS) {
        for (int i = s; i <= e; i++) {
            if (inorder[i] == preS) return i;
        }
        return -1;
    }
    TreeNode* buildIt(vector<int>& preorder, vector<int>& inorder, int &preIndex, int s, int e) {
        if (s > e) return nullptr;
        TreeNode* root = new TreeNode(preorder[preIndex]);
        int mid = findMid(inorder, s, e, preorder[preIndex]);
        preIndex++; 
        root->left = buildIt(preorder, inorder, preIndex, s, mid - 1);
        root->right = buildIt(preorder, inorder, preIndex, mid + 1, e);
        
        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (inorder.size() == 0 || preorder.size() == 0) return nullptr;
        
        int preIndex = 0;
        return buildIt(preorder, inorder, preIndex, 0, inorder.size() - 1);
    }
};


