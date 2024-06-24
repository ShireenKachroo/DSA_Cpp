void selectionSort(int arr[], int n)
{
     //basic idea: min find karo aur sort it with first ele of the array.
     for(int i = 0; i<n-1; i++)
     {
        int min_index = i;
        for(int j=i+1;j<n;j++)
        {
             if(arr[j] < arr[min_index])
             {
                 min_index = j;
             }
         }
         int temp = arr[min_index];
         arr[min_index] = arr[i];
         arr[i] = temp;
     }
}
