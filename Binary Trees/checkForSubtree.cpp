//check for subtree in a binary tree

class Solution
{
    bool checkIdentical(Node*T,Node*S){
        if(S==NULL && T==NULL) return true;
        
        if(S&&!T) return false;
        if(T&&!S) return false;
        
        if(T->data == S->data){
            if(checkIdentical(T->right,S->right) && checkIdentical(T->left,S->left)) return true;
            else return false;
        }
        return false;
    }

    public:

    bool isSubTree(Node* T, Node* S) 
    {
        if(T==NULL) return false;
        if(S==NULL) return true;//null is subtree
        if(T==NULL && S==NULL) return true;
       //first check if the root of subtree even exists in BT
       
      queue<Node*>q;
      q.push(T);
        while(!q.empty()){
          //performing level order traversal
          Node* temp = q.front();
          q.pop();
          
        if(temp->data == S->data){
           //root of subtree found--->check if the left && right halves are identical in both trees
           if(checkIdentical(temp,S)) return true;
        }

        //check if root exists in some other subtree of hat tree
        //i.e. continue level order traversal
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
      }
     return false; //root of subtree not found
  }
};
