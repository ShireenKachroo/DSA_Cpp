class Solution {
public:
    string postToInfix(string exp) {
        stack<string> st;
        if(exp.length() < 3 ) return "";
        // Traverse the string
        for (int i = 0; i < exp.length(); i++) {
            // If operands encountered, push them into stack
            if ((exp[i] >= 'a' && exp[i] <= 'z') || (exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= '0' && exp[i] <= '9')) {
                st.push(string(1, exp[i]));
            } 
            else {
                string a = "", b = "";
                // Pop two elements from stack
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                // Form a string with the operator in between the two operands
                //string temp = '(' + b + exp[i] + a + ')'; ---->gives TLE
                st.push("(" + b + exp[i] + a + ")");  //--->no TLE
            }
        }
        // The remaining element in stack is the infix expression
        return st.top();
    }
};
