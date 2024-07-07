/*LOWER BOUND---> smallest index such that arr[index] >= key*/
int lowerBound(int arr[], int n, int key)
{
    //make sure that array is sorted
    sort(arr, arr+n);
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    int ans;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] >= key)
        {
            ans = mid;
            end = mid-1; //to search for the smallest index
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}
