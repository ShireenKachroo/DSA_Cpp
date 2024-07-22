class Solution{
public:	
	int findKRotation(int nums[], int n) 
	{
        int start = 0;
        int end = n - 1;
        if (nums[start] <= nums[end])  return start;//no rotation
        while (start <= end) 
        {
            int mid = start + (end - start) / 2;
            if (mid < n - 1 && nums[mid] > nums[mid + 1])  return mid + 1;
            if (mid > 0 && nums[mid] < nums[mid - 1]) return mid;
            if (nums[mid] >= nums[start]) start = mid + 1;
            else end = mid - 1;
        }
        return -1;
    
	    
	}

};
