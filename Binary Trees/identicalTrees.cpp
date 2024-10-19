class Solution
{
    public:
    bool isIdentical(Node *r1, Node *r2)  //TC:O(N) and SC O(N) --->recursive stack space 
    {
        if(r1 == NULL && r2 == NULL) return true; //if both trees dn exist-->identical
        //if one tree exists but other doesnt then not identical
        if(r2 && r1 == NULL) return false;
        if(r2 == NULL && r1) return false;
        //if both trees exist and their node value is equal
        if(r1->data == r2->data){
            //check forleft and right subtree
            if(isIdentical(r1->left,r2->left) && isIdentical(r1->right,r2->right)) return true;
            else return false;
        }
        return false;
    }
};
