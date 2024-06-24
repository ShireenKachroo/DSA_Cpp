void insertionSort(int arr[], int n)
{
    //basic idea: pehle ek index choose karo (from 0 to size-1) and store it in other variable then,check karo ki wo apne pehle waale se chhota hai? if yes then swap them
    for(int i=0;i<=n-1;i++)
    {
        int j = i;
       while(j>0 && arr[j]<arr[j-1])
       {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
       }
    }
}
