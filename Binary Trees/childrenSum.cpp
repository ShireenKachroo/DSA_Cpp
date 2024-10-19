void reorder(Node* root){  //TC:O(N) and SC:O(N)--->recursive stack space
  if(root == NULL) return;
  int child = 0;
  //sum left and right child data
  if(root->left) child += root->left->data;
  if(root->right) child += root->right->data;
  
  if(root->data <= child) root->data = child; //update root data with sum
  
  //update left and right children with root's data is it is greater than their sum
  else{
    if(root->left)  root->left->data = root->data;
    if(root->right)  root->right->data = root->data;
  }
  
  reorder(root->left);
  reorder(root->right);
  
  int total = 0;
  if(root->left) total += root->left->data;
  if(root->right) total += root->right->data;
  if(root->left || root->right) root->data = total;
}
