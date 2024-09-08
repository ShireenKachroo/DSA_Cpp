//FINDING THE MAXIMUM SUBARRAY SUM

//KADANE's ALGO--->we carry a subarray sum as long as it gives us a positive sum
class Solution {
public:
    int maxSubArray(vector<int>& nums) {  //TC:O(n)   SC:O(1)
        int maxSum = INT_MIN;
        int sum = 0;
        for(auto it:nums){
            sum += it;
            maxSum = max(maxSum,sum);
            if(sum < 0) sum = 0;
        }
        return maxSum;
    }
};
