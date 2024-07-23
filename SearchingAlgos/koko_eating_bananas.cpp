class Solution {
public:
    long long int findHrs(vector<int>&piles,int mid)
    {
        long long int totHrs = 0;
        int n = piles.size();
        for(int i=0;i<n;i++)
        {
            totHrs += ceil(((double)piles[i])/(double)mid);
        }
        return totHrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) 
    {
        sort(piles.begin(), piles.end());
        int n = piles.size();
        int start = 1;
        int end = piles[n-1];
        long long int k = 0;
        while (start <= end)
        {
            int mid = start + (end - start)/2;   
            k = findHrs(piles,mid);
            if(k <= h)  end = mid - 1;
            else  start = mid + 1;
        }
        return start;
    }
};
