class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int mid) {
        int subArr = 1;
        long long int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (sum + nums[i] > mid) {
                subArr++;
                sum = nums[i];
            } 
            else {
                sum += nums[i];
            }
        }
        return subArr;
    }

    int splitArray(vector<int>& nums, int k) {
        //we have to minimise the maximum subarray sum---> min(max) type problem
        int n = nums.size();
        //our search space will boil down to [max[arr], sum[arr_ele]]
        int s = *max_element(nums.begin(), nums.end());
        int e = accumulate(nums.begin(), nums.end(), 0);

        // Applying binary search
        while (s < e) {
            int mid = s + (e - s) / 2;

            if (numberOfSubarrays(nums, mid) <= k) {
                e = mid; 
            } 
            else {
                s = mid + 1; 
            }
        }
        return s;
    }
};
