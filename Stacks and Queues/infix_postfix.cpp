class Solution {
public:
    // Helper function to find precedence of characters
    int prec(char ch) {
        if (ch == '^') return 3; // it has the highest precedence
        if (ch == '*' || ch == '/') return 2;
        if (ch == '+' || ch == '-') return 1;
        return -1; // other things like () have the lowest precedence
    }

    // Function to convert infix expression to postfix expression
    string infixToPostfix(string s) {
        stack<char> st;
        string ans = "";

        // Traversing the whole string
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];

            // If operands found
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9')) {
                ans += c;
            }
            // If opening bracket found
            else if (c == '(') {
                st.push(c);
            }
            // If closing bracket found
            else if (c == ')') {
                while (!st.empty() && st.top() != '(') {
                    ans += st.top();
                    st.pop();
                }
                st.pop(); // to remove '('
            }
            // If any operator found
            else {
                while (!st.empty() && prec(c) <= prec(st.top())) {
                    ans += st.top();
                    st.pop();
                }
                st.push(c);
            }
        }

        // Pop remaining elements from the stack
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
