class Solution {
public:
    /* BRUTE FORCE APPROACH 
    vector<int> getLeftMax(vector<int>& height, int n) {
        vector<int> ans(n);
        // 0th index --> no max exists therefore, it will consider its own height as its leftMax
        ans[0] = height[0];
        // for remaining indices, find the max to the left
        for (int i = 1; i < n; i++) {
            ans[i] = max(ans[i - 1], height[i]);
        }
        return ans;
    }
    vector<int> getRightMax(vector<int>& height, int n) {
        vector<int> ans(n);
        // last index --> no max exists therefore, it will consider its own height as its rightMax
        ans[n - 1] = height[n - 1];
        // for remaining indices, find the max to the right
        for (int i = n - 2; i >= 0; i--) {
            ans[i] = max(ans[i + 1], height[i]);
        }
        return ans;
    }
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax = getLeftMax(height, n);
        vector<int> rightMax = getRightMax(height, n);
        int amt_of_water = 0; // initially assuming no water collected
        for (int i = 0; i < n; i++) {
            int sum = min(leftMax[i], rightMax[i]) - height[i];
            amt_of_water += sum;
        }
        return amt_of_water;
    }*/

    /*OPTIMAL APPROACH: 2 POINTERS*/
    int trap(vector<int>& height) {
        int n = height.size();
        int left = 0; //points to first building
        int right = n-1; //points to last building
        int amt_of_water = 0;
        int maxLeft = 0, maxRight = 0; //initially max height building to left, right is 0

        //traversing the heights array
        while(left <= right){
            //rightmost building has higher height
            if(height[left] <= height[right]){
                //height of current building is more than the building on its left
                if(height[left] >= maxLeft){
                    maxLeft = height[left];
                }
                //height of current building is less than the building on its left, it can store water
                else amt_of_water += maxLeft - height[left];
                left++;
            }
            //finding leftmost highest building
            else if(height[right] < height[left]){
                //if the current building is higher than its right building
                if(height[right] >= maxRight){
                    maxRight = height[right];
                }
                //if current building is lower than its right building, it can store water
                else amt_of_water += maxRight - height[right];
                right--;
            }
        }
        return amt_of_water;
    }

};
