class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if(matrix.empty()) return {}; // Handle edge case of empty matrix
        
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        int left = 0, right = cols - 1;  // Set right to the last column (cols - 1)
        int top = 0, bottom = rows - 1;  // Set bottom to the last row (rows - 1)
        
        vector<int> ans;

        while(top <= bottom && left <= right) {
            // Traverse from left to right along the top row
            for(int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;  // Move the top boundary down

            // Traverse from top to bottom along the right column
            for(int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;  // Move the right boundary left

            // Traverse from right to left along the bottom row, if still within bounds
            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;  // Move the bottom boundary up
            }

            // Traverse from bottom to top along the left column, if still within bounds
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;  // Move the left boundary right
            }
        }

        return ans;
    }
};
