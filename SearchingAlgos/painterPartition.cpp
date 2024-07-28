int paintBoards(vector<int>&boards, int mid){
    int painter = 1;
    long long int areaPainted = 0;
    for(int i=0;i<boards.size();i++){
        if(areaPainted+boards[i] <= mid)  areaPainted += boards[i];
        else{
            painter++;
            areaPainted = boards[i];
        }
    }
    return painter;
}
int findLargestMinDistance(vector<int> &boards, int k)
{
    //we have to find minimum of maximum area--->min(max) type of problem
    int n = boards.size();
    //our search space will boil down to[max_ele, sum_of_ele_of_Arr]
    int s = *max_element(boards.begin(), boards.end());
    int e = accumulate(boards.begin(), boards.end(),0);

    //applying BS algo
    while(s < e){
        int mid = s+(e-s)/2;
        int noOfPainters = paintBoards(boards,mid);
        if(noOfPainters <= k) e = mid;
        else  s = mid+1;
    }
    return s;
}
