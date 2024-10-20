//fins distance between 2 nodes in a BT

class Solution{
    //finding LCA
    Node* lca(Node*root, int a, int b){
        if(root == NULL) return nullptr;
        if(root->data == a || root->data == b) return root;
        
        Node* left = lca(root->left,a,b);
        Node* right = lca(root->right,a,b);
        
        if(left && right) return root;
        if(left) return left;
        if(right) return right;
        
        return nullptr;
    }
    
    //finding distance b/w nodes
    int getDist(Node* root,int a, int dist){
        if (root == nullptr) return -1; //tree doesnt exist
        if (root->data == a) return dist; //required node found

        int leftDist = getDist(root->left, a, dist + 1); //finding node in left
        if (leftDist != -1) return leftDist; //returning its dist if exists in left
        
        //else check in right subrtree
        return getDist(root->right, a, dist + 1);
        
    }
    
    public:
    
    int findDist(Node* root, int a, int b) {
        Node* LCA = lca(root, a, b);
        if (!LCA) return -1;

        int distA = getDist(LCA, a, 0);
        int distB = getDist(LCA, b, 0);

        if (distA == -1 || distB == -1) return -1;

        return distA + distB; 
    }
};
