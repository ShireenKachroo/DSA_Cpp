class Solution {
private: 
    vector<int>nextSmallestEle(vector<int>heights, int n)
    {
        stack<int> st;
        st.push(-1);
        vector<int>ans(n);
        for(int i=n-1;i>=0;i--)
        {
            int curr = heights[i];
            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

    vector<int>prevSmallestEle(vector<int>heights, int n)
    {
        stack<int> st;
        st.push(-1);
        vector<int>ans(n);
        for(int i=0;i<n;i++)
        {
            int curr = heights[i];
            while(st.top() != -1 && heights[st.top()] >= curr){
                st.pop();
            }
            ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int>next(n);  //to store next smallest ele
        next = nextSmallestEle(heights, n);
        vector<int>prev(n);  //to store prev smallest ele
        prev = prevSmallestEle(heights, n);

        int area = INT_MIN;
        for(int i=0; i<n; i++){
            int len = heights[i];
            if(next[i] == -1)  next[i] = n; // if no next smaller ele found
            int br = next[i] - prev[i] -1;
            int newArea = len*br;
            area = max(area, newArea);  //since we need to return largest area
        }
        return area;
    }
};
