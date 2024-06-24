int partitionIndex(int arr[], int s, int e)
{
    int pivot = arr[s];
    int i = s;
    int j = e;
    while(i<j)
    {
        while(arr[i] <= pivot && i <= e-1)
        {
            i++;
        }
        while(arr[j] > pivot && j >= s+1)
        {
            j--;
        }
        if(i<j)
        {
            //swap them
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp2 = arr[s];
    arr[s] = arr[j];
    arr[j] = temp2;
    return j;
}
void quickSort(int arr[],int s, int e)
{
    if(s>=e)
    {
        return;
    }
    //basic idea: ek ele select karo, place it at its right position and get partition index. sort left amd right parts of pivoted element and repeat till fully sorted
    int partition = partitionIndex(arr,s,e);
    //sort left part
    quickSort(arr,s,partition);
    //sort right part
    quickSort(arr,partition+1,e);
    return;
}
