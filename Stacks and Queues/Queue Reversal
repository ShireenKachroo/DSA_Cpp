class Solution
{
    public:
    queue<int> rev(queue<int> q)
    {
        //using a stack for reversal
        stack<int>st;
        //pushing ele into stack from queue
        while(!q.empty()){
            int ele = q.front();
            st.push(ele);
            q.pop();
        }
        //pushing reversed ele from queue to stack
        while(!st.empty()){
            int ele = st.top();
            q.push(ele);
            st.pop();
        }
        return q; //returning reversed queue
    }
};
