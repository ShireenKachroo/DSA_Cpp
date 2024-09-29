void printRightSideView(Node* root, int level, vector<int>&res){
    //level order traversal-->last node--->ans  OR reverse level order traversal--->first node--->ans  but then TC:O(N) and SC:O(N)
    //recursive sol--->TC:O(N) but SC:O(ht of tree)--->better approach (inOrder,preOrder,postOrder)

    //USE REVERSE PREORDER TRAVERSAL root->right->left
    if(root == NULL) return;
    if(res.size() == level) res.push_back(root->val);
    printRightSideView(root->right,level+1,res);
    printRightSideView(root->left,level-1,res);
    return;
}

void rightSideView(Node* root){
    vector<int>res;
    printRightSideView(root,0,res);

    //printing right side view
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
