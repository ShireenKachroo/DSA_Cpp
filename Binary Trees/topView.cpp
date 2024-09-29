/*if size of queue is m and map is n, TC:O(m+n)  S.C: O(m+n)*/

void printTopView(Node* root){
    //leftmost-->right most
    //use level order traversal
    vector<int>ans;
    if(root == NULL) return;
    map<int,int>mpp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node = it.first;
        int line = it.second;
        if(mpp.find(line) == mpp.end()) mpp[line] = node->val;

        if(node->left) q.push({node->left, line-1});
        if(node->right) q.push({node->right, line+1});

    }
    for(auto it:mpp){
        ans.push_back(it.second);
    }
    //printing top view
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return;
}
