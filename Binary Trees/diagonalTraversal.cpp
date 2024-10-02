void diagonalTraversal(Node* root, map<int,vector<int>>&mpp, int dist){
    //following preorder traversal
    if(root == NULL) return;
    mpp[dist].push_back(root->data);
    diagonalTraversal(root->left,mpp,dist+1);//left dist incr by 1
    diagonalTraversal(root->right,mpp,dist); //right diagonal is considered, dist in right remains same
    return;
}

vector<int> diagonal(Node *root) //TC:O(N)    and   SC:O(N)
{
   map<int,vector<int>>mpp;
    int dist = 0;
    diagonalTraversal(root,mpp,dist); //modifies the map with final result
  
    vector<int>result;
    for(auto it:mpp){
        for(auto i: it.second){
            result.push_back(i);  //storing vector of diagonal ele in result
        }
    }
    return result;
}
