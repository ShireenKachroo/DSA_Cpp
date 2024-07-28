class Solution {
public:
    vector<int> mergeArr(vector<int>& nums1, vector<int>& nums2)
    {
        //Merging logic
        for(int i=0; i<nums2.size(); i++)
        {
            int n = nums2.at(i);
            nums1.push_back(n);
        }
        //sorting logic
        sort(nums1.begin(),nums1.end());
        return nums1;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        //merge the arrays first;
        mergeArr(nums1, nums2) ;

        double median = 0;
        int n = nums1.size();
        int start = 0, end = n-1;

        //finding mid index
        int mid = (start+(end - start))/2;
        for(int i=0; i<nums1.size();i++)
        {
            //odd sized array
            if(n%2 != 0)
            {
                median = nums1[mid];
            }
            //even sized array
            else
            {
                median = (double)( nums1[mid] + nums1[(mid+1)] )/2;
            }
        }
        return median;
    }
};
