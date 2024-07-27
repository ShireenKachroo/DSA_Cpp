class Solution {
public:
    int sumOfDiv(vector<int>& nums, int mid){
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += ceil((double)nums[i]/(double)mid);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        //our search space will be [1, max_ele_of_array]
        int s = 1;
        int e = *max_element(nums.begin(), nums.end());

        //applying BS
        while(s <= e){
            int mid = s+(e-s)/2;
            if(sumOfDiv(nums,mid) <= threshold){
                e = mid-1;  //look for smallest divisor
            }
            else s = mid+1;
        }
        return s;  //will always point to smallest divisor
    }
};
