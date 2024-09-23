//preorder, postorder,inorder traversal in one pass;
vector<int>preInPostTraversal(Node* root){
  stack<pair<Node*,int>>st;
  st.push({root,1});
  vector<int>pre, In, post;
  if(root == NULL) return;
  while(!st.empty()){
    auto it = st.top();
    st.pop();
    /*if it.second == 1, then push the val of it in pre vector, increment it.second by one, push it into stack...
      if it.first->left is not NULL then put this left->val in stack with it.second = 1;*/
    if(it.second == 1){
      pre.push_back(it.first->val);
      it.second++;
      st.push(it);
      if(it.first->left != NULL) st.push({it.first->left,1});
    }
    /*if it.second == 2, then push the val of it in In vector, increment it.second by one, push it into stack...
      if it.first->right is not NULL then put this right->val in stack with it.second = 1;*/
    if(it.second == 2){
      In.push_back(it.first->val);
      it.second++;
      st.push(it);
      if(it.first->right != NULL) st.push({it.first->right,1});
    }
    else post.push_back(it.first->val);
  }
}
