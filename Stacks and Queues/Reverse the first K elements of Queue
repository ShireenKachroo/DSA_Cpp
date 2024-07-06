class Solution
{
    public:
    
    // Function to reverse first k elements of a queue.
    queue<int> modifyQueue(queue<int> q, int k) {
        int n = q.size();
        stack<int>st;
        //traverse till k in the queue and fetch elements into stack
        for(int i=0;i<k;i++){
            int ele = q.front();
            st.push(ele);
            q.pop();
        }
        //popping elements form stack ans pushing into queue
        while(!st.empty()){
            int ele = st.top();
            q.push(ele);
            st.pop();
        }
        //pushing the front ele (n-k) of the queue to its back
        for(int i=0;i<(n-k);i++){
            int ele = q.front();
            q.pop();
            q.push(ele);
        }
        return q; //return the queue with first k ele reversed
    }
};
