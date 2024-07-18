class Solution {
public:
    //to get the next smallest ele to the left 
    vector<int>getNSL(vector<int>&arr, int n){
        stack<int>st;   //stores indices of ele
        vector<int>res(n);
        //traversing from left -> right
        for(int i=0;i<n;i++){
            if(st.empty()) res[i] = -1; //no smaller ele to left
            else{
                while(!st.empty() && arr[st.top()] >= arr[i])  st.pop(); //remove larger ele from stack
                //ele on stack's top is smaller than current ele, put it in res, else put -1 in res as no smaller ele found
                res[i] = st.empty()?-1:st.top();
            }
            st.push(i); //pushing the current index into stack
        }
        return res;
    }
    //to get the next smallest element to the right
    vector<int>getNSR(vector<int>&arr, int n){
         stack<int>st;   //stores indices of ele
        vector<int>res(n);
        //traversing from right -> left
        for(int i=n-1;i>=0;i--){
            if(st.empty()) res[i] = n; //no smaller ele to right
            else{
                while(!st.empty() && arr[st.top()] > arr[i])  st.pop(); //remove larger ele from stack
                //ele on stack's top is smaller than current ele, put it in res, else put n in res as no smaller ele found
                res[i] = st.empty()?n:st.top();
            }
            st.push(i); //pushing the current index into stack
        }
        return res;
        
    }

    
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int>NSL = getNSL(arr,n); //to store next smallest ele to the left
        vector<int>NSR = getNSR(arr,n); //to store next smallest ele to the right
        long long sum = 0;
        int M = 1e9+7; //modulo value given

        //traversing the array 
        for(int i=0; i<n; i++){
            long long left = i - NSL[i];    //number of elements greater than arr[i] to the left
            long long right = NSR[i] - i;   //number of elements greater than arr[i] to the right
            long long totSubArr = left*right; //no. of sub-arrays having arr[i] as the smallest ele
            long long totSum = arr[i]*totSubArr; //sum of min ele of all subArrays having arr[i] as the smallest ele

            sum = (sum + totSum)%M;
        }
        return sum;
    }
};

/*
  TC: O(n)+O(n)+O(n) = O(3n) ~ O(n);
  SC: O(n); 
*/
