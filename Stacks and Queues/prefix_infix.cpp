class Solution {
  public:
    string preToInfix(string pre) {
        stack<string>st;
        //reverse traversal through the string
        for(int i=pre.length()-1;i>=0;i--)
        {
            //if operator found take 2 ele from stack and add the operatior between them, return the ans with brackets
            if(pre[i]=='+' || pre[i]=='-' || pre[i]=='*' || pre[i]=='/' || pre[i]=='^')
            {
                string a="",b = "";
                a  = st.top();
                st.pop();
                b = st.top();
                st.pop();
                string temp = '(' + a + pre[i] + b + ')';  //temp = (operand1 operator operand2)
                st.push(temp);  //pushing the infix and into stack
            }
            //if operand encountered, simply push it into stack
            else
            {
                st.push(string(1, pre[i]));  //creation of string object tha contains a single character
            }
        }
        //final infix string answer will be top element of stack
        string ans = st.top();
        return ans;
    }
};
