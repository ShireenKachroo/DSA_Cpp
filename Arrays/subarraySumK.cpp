/*Brute force--->generate all subarrays and check the given condition
int subarraySum(vector<int>& nums, int k) {
        int subarray = 0;
        for(int i=0; i<nums.size();i++){
            int sum = 0;
            for(int j=i;j<nums.size();j++){
                sum += nums[j];
                if(sum == k) ++subarray;
            }
        }
        return subarray;
    }*/

int subarraySum(vector<int>& nums, int k) {
        /*optimal solution-->using hashmap*/
        map<int,int>mpp;
        mpp[0] = 1;
        int prefixSum = 0, count = 0;
        for(int i=0;i<nums.size();i++){
            prefixSum += nums[i];
            int toRemove = prefixSum - k;
            count += mpp[toRemove];
            mpp[prefixSum]++;
        }
        return count;
    }
