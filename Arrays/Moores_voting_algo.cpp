//FIND MAJORITY ELEMENT(>N/2 TIMES) given that it always exists

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        /*brute force-->hashing--->T.C: O(n) S.C:O(n)
        unordered_map<int,int>mpp; //stores ele,freq
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second > n/2) return it.first;
        }
        return -1; //no majorty ele -->impossible as it is given that majority ele always exists*/

        /*OPTIMAL APPROACH*/
        //step 1: apply Moore's Voting Algo--->T.C:O(n)  SC:O(1)
        int cnt = 0;
        int ele;
        for(int i=0;i<n;i++){
            if(cnt == 0){
                cnt = 1;
                ele = nums[i];
            }
            else if(nums[i] == ele) cnt++;
            else cnt--;
        }
        /*step2: check if ele found is majority (omit this step in this case a it is given that majority ele always exists)
        int freq = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == ele) freq++;
        }
        if(freq > n/2) */
        return ele;
    }
};
