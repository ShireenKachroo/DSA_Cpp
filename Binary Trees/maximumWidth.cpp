//finding the maximum width of a binary tree'

class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) return 0; // If root is null, width is 0

        int ans = 0;
        queue<pair<TreeNode*, long long>> q; 
        q.push({root, 0}); //push root at index 0

        while(!q.empty()){
            int sizee = q.size(); 
            long long first, last;
            long long minAtLevel = q.front().second; //normalize indices at each level

            for(int i = 0; i < sizee; i++){
                long long curr_idx = q.front().second - minAtLevel; //normalize index
                TreeNode* node = q.front().first;
                q.pop();

                if(i == 0) first = curr_idx; //store the first index of the level
                if(i == sizee - 1) last = curr_idx; //store the last index of the level

                //push children in queue with updated indices
                if(node->left) q.push({node->left, 2 * curr_idx + 1});
                if(node->right) q.push({node->right, 2 * curr_idx + 2});
            }
            ans = max(ans, int(last - first + 1));
        }
        return ans;
    }
};
