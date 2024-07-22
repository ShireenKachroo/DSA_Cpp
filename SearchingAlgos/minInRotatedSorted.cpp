class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        // Handle the case where the array is not rotated
        if (nums[start] <= nums[end])  return nums[start];
        
        //for rotated array
        while (start <= end) 
        {
            int mid = start + (end - start) / 2;
            if (mid < n - 1 && nums[mid] > nums[mid + 1])  return nums[mid + 1];
            if (mid > 0 && nums[mid] < nums[mid - 1]) return nums[mid];
            if (nums[mid] >= nums[start]) start = mid + 1;
            else end = mid - 1;
        }
        return -1;
    }
};
