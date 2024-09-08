//sort an arry of 0's,1's and2's
/*INTUITION: DUTCH NATIONAL FLAG ALGORITHM
3 pointers--->low, mid, high
Principles:
1. 0 to (low-1) --->0's
2. low to(mid-1) --->1's
3. mid to high ---> random unsorted no's
4.(high+1) to (size-1) --->2's

if(arr[mid] == 0)--->swap(arr[low],arr[mid]) + low++ + mid++;
if(arr[mid] == 1)---> mid++;
if(arr[mid] == 2)-->swap(arr[mid],arr[high]) + high--;
if(mid > high) break of out loop;

TC: O(N)   SC:O(1)
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;

        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid] == 1) mid++;
            else if(nums[mid] == 2){
                swap(nums[high], nums[mid]);
                high--;
            }
        }
        return;
    }
};
