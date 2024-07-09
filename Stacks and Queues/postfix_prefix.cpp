string postToPre(string post_exp) {
        stack<string>st;
        //traversing the string
        for(int i=0;i<post_exp.length()-1;i++){
            //if operand encounterd,push into stack
            if((post_exp[i] >= 'a' && post_exp[i] <= 'z') || (post_exp[i] >= 'A' && post_exp[i] <= 'Z') || (post_exp[i] >= '0' && post_exp[i] <= '9'))
            {
                st.push(string(1,post_exp[i]));
            }
            //if operator found
            else{
                string b = "", a = "";
                b = st.top();
                st.pop();
                a = st.top();
                st.pop();
                string temp = post_exp[i]+a+b;
                st.push(temp);
            }
        }
        return st.top();
    }
