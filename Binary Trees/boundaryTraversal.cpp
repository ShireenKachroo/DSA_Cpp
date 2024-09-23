//helper functions
bool isLeaf(Node* root){
  if(root->left == NULL && root->right == NULL) return true;
  return false;
}

void addLeftBoundary(Node* root, vector<int>&res){
  Node* curr = root->left;
  while(curr){
    if(!isLeaf(curr)) res.push_back(curr->data);
    if(curr->left) curr = curr->left;
    else curr = curr->right;
  }
  return;
}

void addRightBoundary(Node* root,vector<int>&res){
  Node* curr = root->right;
  while(curr){
    if(!isLeaf(curr)) res.push_back(curr->data);
    if(curr->right) curr = curr->right;
    else curr = curr->left;
  }
  return;
}

void addLeaves(Node* root, vector<int>&res){
  if(isLeaf(root)){
    res.push_back(root);
    return;
  }
  if(root->left) addLeaves(root->left,res);
  if(root->right) addLeaves(root->right,res);
  return;
}

//main function
vector<int> printBoundary(Node* root){
  vector<int>res;
  if(!root) return res;
  if(!isLeaf(root)) res.push_back(root->data);
  addLeftBoundary(root,res);
  addLeaves(root,res);
  addRightBoundary(root,res);
  return res;
}
