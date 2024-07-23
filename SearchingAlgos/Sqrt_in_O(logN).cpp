class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        int low = 1, high = x;  
        
        while(low <= high) 
        {
            long long mid = (low+high)/2;
            long long val = mid*mid;
            if(val <= x)  low = mid+1;
            else high = mid-1;
        
        }
        return high;
    }
};
