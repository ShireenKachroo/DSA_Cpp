/*Leaders in an array ---> everything in the right should be smaller*/
//[10,22,15,3,0,6]-->o/p: [22,15,6]

/*BRUTE FORCE APPROACH
class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(int n, int arr[]) {
    vector<int>ans;
    bool isLeader;
    for(int i=0;i<n-1;i++){
        int minLeader = arr[i];
         isLeader = false;
        for(int j=i+1;j<n;j++){
            if(arr[i] < arr[j]) {isLeader = false; break;}
            else isLeader = true;
        }
        //check if ele is a leader
        if(isLeader == true) ans.push_back(minLeader);
    }
    //last element is always a leader
    ans.push_back(arr[n-1]);
    return ans;
    }
};*/

/*OPTIMAL SOLUTION*/
vector<int> findLeaders(vector<int>&arr){
    int n = arr.size();
    vector<int>ans;
    int maxEle = INT_MIN;
    for(int i=n-1;i>=0;i--){  //O(N) time complexity
        if(arr[i] > maxEle){
            ans.push_back(arr[i]);
        }
        maxEle = max(maxEle,arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
 }
