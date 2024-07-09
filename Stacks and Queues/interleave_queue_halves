#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(11);
    q.push(12);
    q.push(13);
    q.push(14);
    q.push(15);
    q.push(16);
    q.push(17);
    q.push(18);
    // Calculate half size of queue
    int half = q.size() / 2;
    stack<int> st;
    // Put first half elements into stack
    for (int i = 0; i < half; i++) {
        int ele = q.front();
        st.push(ele);
        q.pop();
    }
    // Pop elements from stack and push back into queue
    while (!st.empty()) {
        int ele = st.top();
        q.push(ele);
        st.pop();
    }
    // Pop elements from front of queue and push them at back
    for (int i = 0; i < half; i++) {
        int ele = q.front();
        q.pop();
        q.push(ele);
    }
    // Put first half elements into stack again
    for (int i = 0; i < half; i++) {
        int ele = q.front();
        st.push(ele);
        q.pop();
    }
    // Pop elements from stack + front of queue and push into queue to get the desired answer
    while (!st.empty()) {
        int ele = st.top();
        st.pop();
        q.push(ele);
        int ele2 = q.front();
        q.pop();
        q.push(ele2);
    }
    // Print final queue
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
