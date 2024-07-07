int binarySearch(vector<int>&arr,int key){
    int s = 0,e = arr.size()-1;
    int mid = s + (e-s)/2;
    while(s <= e)
    {
        if(arr[mid] == key)
        {
            return mid;     //returning the index of ele
        }
        else if(arr[mid]<key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
return -1;    //ele not found
}
