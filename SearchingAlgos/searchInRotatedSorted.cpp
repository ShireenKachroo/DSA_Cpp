class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        // apply binary search
        int n = nums.size();
        int start = 0;
        int end = n - 1;

        while (start <= end) 
        {
            int mid = start + (end - start) / 2;

            //if target found at mid index
            if (nums[mid] == target)    return mid;

            //if start value is less than/equal to mid
            else if (nums[start] <= nums[mid]) 
            {
                //if target alue lies between start and mid
                if (nums[start] <= target && target < nums[mid]) 
                {
                    end = mid - 1;
                } 
                else   //target value doesn't lie b/w start and mid
                {
                    start = mid + 1;
                }
            }

            //start value > mid 
            else  
            {
                //if target value lies between mid and end
                if (nums[mid] < target && target <= nums[end]) 
                {
                    start = mid + 1;
                } 
                else  //target value doesn't lie between mid and end
                {
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
