class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++)
        {
            char ch = s[i];
            
            //for opening parenthesis
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);  //pushing opening brackets into stack
            }
            //for closing brackets
            else{
                if(!st.empty()){
                    //if stack is not empty
                    char top = st.top();
                    if((ch == ')' && top == '(') || (ch == ']' && top == '[') || (ch == '}' && top == '{'))
                    {
                        //if pairs matched;
                        st.pop(); //move deep in stack to match other pairs
                    }
                    else{
                        //pairs not matched
                        return false;
                    }
                }
                else{
                    //if stack is empty
                    return false;
                }
            }
        }
        return st.empty();  //stack becomes empty if all brackets matched--->returns true, else returns false
    }
};
