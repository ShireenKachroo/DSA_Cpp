vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int>st;
    st.push(-1);  //if no next smaller ele is found we return -1
    vector<int>ans(n);

    for(int i = n-1; i>=0; i--){

        int curr = arr[i];
        while(st.top() >= arr[i]){
            st.pop();
        }
        //if stack's top is < curr
        ans[i] = st.top();
        st.push(curr);
    }
    return ans;
}
