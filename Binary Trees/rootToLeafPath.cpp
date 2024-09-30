//TC:O(N) and SC:O(N)

void getPath(Node* root, vector<vector<int>>&ans, vector<int>&path){
    if(root == NULL) return;
    //push current node to path lit
    path.push_back(root->val);
    //check for leaf node
    if(root->left == NULL && root->right == NULL){
        ans.push_back(path);  //if leaf node add it to path list
    }
    getPath(root->left,ans,path); //check for left subtree
    getPath(root->right,ans,path); //check of right subtree
    path.pop_back();
    return;
}
vector<vector<int>> rootToLeafPath(Node* root){
    vector<vector<int>>ans;
    vector<int>path;
    getPath(root,ans,path);
    return ans;
}
