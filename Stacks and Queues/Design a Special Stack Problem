#include <bits/stdc++.h>
class SpecialStack {
    stack<int> st;
    int mini;
public:
    // Function to push an element into the stack
    void push(int data) {
        if(st.empty()) {
            st.push(data);
            mini = data;
        }
        else {
            if(data < mini) {
                // Store the modified value
                st.push(2 * data - mini);
                // Update the mini
                mini = data;
            }
            else {
                st.push(data);
            }
        }
    }

    // Function to pop an element from the stack
    void pop() {
        if(st.empty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        int curr = st.top();
        st.pop();
        if(curr < mini) {
            // Restore the previous minimum value
            mini = 2 * mini - curr;
        }
    }

    // Function to get the top element of the stack
    int top() {
        if(st.empty()) return -1;
        int curr = st.top();
        if(curr < mini) return mini;
        return curr;
    }

    // Function to get the minimum element in the stack
    int getMin() {
        if(st.empty()) return -1;
        return mini;
    }
};

