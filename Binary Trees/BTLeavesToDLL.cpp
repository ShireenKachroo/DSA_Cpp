//convert binary tree leaves to DLL

Node* helper(Node* root, Node* &head, Node* &tail){
        if (root == nullptr) return nullptr; 
  
        //check for left and right subtrees
        Node* leftChild = helper(root->left, head, tail);
        Node* rightChild = helper(root->right, head, tail);

        //check if leaf node
        if (root->left == nullptr && root->right == nullptr) {
            //add to DLL
            if (head == nullptr) {
                head = root;
            } 
            else {
                tail->right = root; 
                root->left = tail;
            }
            tail = root;
          //reomve from tree
            return nullptr; 
        }
  
        root->left = leftChild;
        root->right = rightChild;
        return root;
    }


    // Function to convert the binary tree to doubly linked list.
    Node* convertToDLL(Node* root) {
        Node* head = nullptr;
        Node* tail = nullptr;
        helper(root, head, tail);
        return head;
    }
