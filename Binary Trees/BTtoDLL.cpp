/*convert a BT to inorder DLL*/

//helper function
void BTtoLL(Node* root, Node*&head, Node*&tail){
  if(root == NULL) return;
  
  //creating DLL form left subtree
  BTtoLL(root->left,head,tail);
  
  //connecting the current root
  if(!head) head = root;
  else{
    root->left = tail;
    tail->right = root;
  }
  tail = root; //updating tail
  
  //creating DLL from right subtree
  BTtoLL(root->right,head,tail);
  
}

//main function
Node* convertedDLL(Node*root){
  if(root == NULL) return nullptr;
  Node* head = nullptr;
  Node* tail = nullptr;
  BTtoLL(root,head,tail);
  return head; //head of new DLL
}
