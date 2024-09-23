class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //if the roots are null
        if(p==NULL || q==NULL) return(p==q);
        //check for the values of nodes on left and right of root
        return ((p->val == q->val) && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
    }
};
