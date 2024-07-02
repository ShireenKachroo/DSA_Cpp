bool findRedundantBrackets(string &s)
{
    //create a stack
    stack<char>st;
    //traversing the string to find redundant brackets
    for(int i=0; i<s.length(); i++)
    {
        char ch = s[i];
        //if an opening bracket / airthematic operator encountered, push it into stack
        if(ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/'){
            st.push(ch);
        }
        //if a closing bracket is found
        else
        {   
            if(ch == ')'){
                bool isRedundant = true;
                //until an opening bracket is found
                while(st.top() != '('){
                    char top = st.top();
                    //if any airthematic operator is found b/w the brackets, the pair of brackets is not redundant
                    if(top == '+' || top =='-' || top =='*' || top =='/'){
                        isRedundant = false;
                    }
                    st.pop();
                }
                //if no airthematic operator found between brackets, pair is redundant
                if(isRedundant == true) return true;
                st.pop();
            }
        }
    }
    return false;
}
