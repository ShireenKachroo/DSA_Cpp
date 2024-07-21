class Solution {
public:
/*BRUTE FORCE  -----> gives TLE for larger inputs
    int longestOnes(vector<int>& nums, int k) {
        int maxLen = 0;
        int len = 0;
        int n = nums.size();
        
        //basically the no of zeroes in any contiguous subarray cant be more than k
       for(int i=0; i<n; i++){
          int zeroCnt = 0;
          for(int j=i; j<n; j++){
            if(nums[j] == 0) zeroCnt++;
            if(zeroCnt <= k){
                len = j-i+1;
                maxLen = max(maxLen,len);
            }
            else break;
          }
        }
        return maxLen;
    }*/

/*OPTIMISATION
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;
        int len = 0;
        int l = 0, r = 0;
        int zeroCnt = 0;

        while(r < n){
            if(nums[r] == 0) zeroCnt++;
            while(zeroCnt > k){
                if(nums[l] == 0){
                    zeroCnt--;
                }
                l++;
            }
            if(zeroCnt <= k){
                len = r-l+1;
                maxLen = max(maxLen,len);
            }
            r++;
        }
        return maxLen;
    }*/

/*MOST OPTIMAL SOLUTION*/
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int maxLen = 0;
        int len = 0;
        int l = 0, r = 0;
        int zeroCnt = 0;

        while(r < n){
            if(nums[r] == 0) zeroCnt++;
            if(zeroCnt > k){
                if(nums[l] == 0){
                    zeroCnt--;
                }
                l++;
            }
            if(zeroCnt <= k){
                len = r-l+1;
                maxLen = max(maxLen,len);
            }
            r++;
        }
        return maxLen;
    }
};
