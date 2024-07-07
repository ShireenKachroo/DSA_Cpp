/*FLOOR---> largest number <= key  and  CEIL---> smallest no >= key*/
pair<int, int> findFloorAndCeil(int arr[], int n, int key) 
{
    // First, make sure the array is sorted
    sort(arr, arr + n);
    int start = 0, end = n - 1, mid;
    int floor = -1, ceil = -1;
    // Find floor
    while (start <= end) 
   {
        mid = start + (end - start) / 2;
        if (arr[mid] <= key) 
        {
            floor = arr[mid];
            start = mid + 1;
        } 
      else {
            end = mid - 1;
        }
    }
    // Find ceil
    start = 0, end = n - 1;
    while (start <= end)
   {
        mid = start + (end - start) / 2;
        if (arr[mid] >= key) 
        {
            ceil = arr[mid];
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }
    return {floor, ceil};
}
