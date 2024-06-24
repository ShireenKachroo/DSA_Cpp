void merge(int arr[], int s, int mid, int e)
{
    int left = s;
    int right = mid+1;
    vector<int>temp;
    while(left<=mid && right<=e)
    {
        if(arr[left]<arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= e)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=s;i<e;i++)
    {
        arr[i] = temp[i-s];
    }
    return;
}
void mergeSort(int arr[], int s, int e)
{
    //basic idea: pehle 2 parts me divide karo array ko and the sort both parts and merge them
    int mid = s+(e-s)/2;
    if(s>=e)
    {
        return;
    }
    //sort left part
    mergeSort(arr,s,mid);
    //sort right part
    mergeSort(arr,mid+1,e);
    //merge the 2 parts
    merge(arr,s,mid,e);
    return;
}
