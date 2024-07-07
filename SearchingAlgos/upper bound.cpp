/*UPPER BOUND---> smallest index such that arr[index] > key*/
int upperBound(int arr[], int n, int key)
{
    int start = 0;
    int end = n-1;
    int mid;
    int ans;
    while(start <= end)
    {
        mid = start + (end - start)/2;
        if(arr[mid] > key)
        {
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}
