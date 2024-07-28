//we have to maximise the min dist between stalls------>[max(min) type problem]

#include<bits/stdc++.h>
using namespace std;

//helper function to check if given no of cows can be placed in the given stalls
bool canWePlace(vector<int>&arr, int mid, int cows){
    int n = arr.size();
    int cowCnt = 1;
    int last = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] - last >= mid){
            cowCnt++;
            last = arr[i];
        }
        if(cowCnt >= cows) return true;
    }
    return false;
}
//function to maximize the min distance between stalls
int maximizeMinDist(vector<int>&arr, int cows){
    //first make sure the array is sorted;
    sort(arr.begin(), arr.end());
    //now think of applying BS
    int n = arr.size();
    //for applying BS our range will boil down to [1, (arr[0]-arr[n-1])]
    int s = arr[0];
    int e = arr[n-1];
    while(s <= e){
        int mid = (s+e)/2;
        if(canWePlace(arr,mid,cows))   s = mid+1;
        else  e = mid-1;
    }
    return e;
}
int main(){
    vector<int>arr = {0,3,4,7,10,9};
    cout<<"Maximum of minimum distance between the stalls is: "<<maximizeMinDist(arr,4)<<endl;
    return 0;
}
