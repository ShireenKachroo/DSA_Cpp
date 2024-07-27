class Solution {
public:
    int noOfDays(vector<int>&weights, int mid){
        int days = 1; //First day.
        int load = 0;  //nothing loded(empty ship)
         
        for (int i = 0; i < weights.size(); i++) {
            if (load + weights[i] > mid) {
                days += 1; //move to next day
                load = weights[i]; //load the weight.
            }
            else {
                //load the weight on the same day.
                load += weights[i];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        //our search space will boil down to [max_ele_of_weightsArr, sum(ele_of_weightsArr)];
        int s = *max_element(weights.begin(), weights.end());
        int e = accumulate(weights.begin(),weights.end(),0);

        //apply BS
        while(s <= e){
            int mid = s+(e-s)/2;
            if(noOfDays(weights,mid) <= days)  e = mid-1;
            else  s = mid+1;
        }
        return s;  //it will point to min ans
    }
};
