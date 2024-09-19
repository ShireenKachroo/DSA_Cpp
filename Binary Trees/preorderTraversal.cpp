//PREORDER---> ROOT->LEFT->RIGHT

void preorder(Node* root){
  if(root == NULL) return; //TC:O(N)  S.C:O(N)
  cout<<root->data<<" "; 
  preorder(root->left);
  preorder(root->right);
}
