//TC:O(N)   S.C:O(N)
void bottomView(Node* root){
    //use the line concept--->level order traversal
    //last node on line-->ans
    vector<int>ans;
    if(root == NULL) return;
    map<int,int>mpp; //stores line, node->data
    queue<pair<Node*, int>>q; //stores node,lineNo.
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int line = it.second;
        mpp[line] = node->val;
        if(node->left) q.push({node->left, line-1});
        if(node->right) q.push({node->right, line+1});
    }
    for(auto it:mpp) ans.push_back(it.second);

    //printing
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return;
}
