class Solution {
public:
    bool isPossible(vector<int>& bloomDay, int m, int k, long long int mid){
        int noOfBouquets = 0;
        int cnt = 0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i] <= mid){
               cnt++;
            }
            else{
                noOfBouquets += (cnt/k);
                cnt = 0;
            }
        }
        noOfBouquets += (cnt/k);

        if(noOfBouquets >= m) return true;
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        long long int val = m*1LL*k*1LL;

        if(val > n)  return -1; //not possible to make m bouquets out of k adjacent flowers

        //find min and max ele of given array
        long long int mini = INT_MAX, maxi = INT_MIN;
        for(int i=0;i<n;i++){
            if(bloomDay[i] > maxi) maxi = bloomDay[i];
            if(bloomDay[i] < mini) mini = bloomDay[i];
        }
        //our search space will be reduced to [min_no_of_flowers, max_no_of_flowers]
        long long int s = mini;
        long long int e = maxi;
 
        while(s <= e){
            long long int mid = (s+e)/2;
            if(isPossible(bloomDay,m,k,mid))  e = mid-1;
            else s = mid+1;
        }
        return s;
    }
};
