//print all the nodes at a distance of k in a brinary tree
class Solution
{
    void printK(struct Node*root, int k, vector<int>& ans){
          if(root == NULL)  return;
          //k=0 ---> we found the node at kth distance
          if(k == 0){
              ans.push_back(root->data);
              return;
          }
          printK(root->left,k-1,ans);
          printK(root->right,k-1,ans);
    }
    public:
//T.C: O(N) and SC:O(N)
    vector<int> Kdistance(struct Node *root, int k)
    {
      vector<int>ans;
      printK(root,k,ans); //helper function to fnd needed nodes
      return ans;
    }
};
