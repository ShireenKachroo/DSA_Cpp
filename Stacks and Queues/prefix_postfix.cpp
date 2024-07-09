class Solution {
  public:
    string preToPost(string pre_exp) {
        stack<string>st;
        //reverse traersal over the entire string
        for(int i = pre_exp.length()-1;i>=0;i--){
            //if operand encountered, simply push it into stack
            if((pre_exp[i] >= 'a' && pre_exp[i] <='z') || (pre_exp[i] >= 'A' && pre_exp[i] <='Z') || (pre_exp[i] >= '0' && pre_exp[i] <='9'))
            {
                st.push(string(1,pre_exp[i]));
            }
            //if operator encountered
            else{
                string a = "", b = "";
                a = st.top();
                st.pop();
                b = st.top();
                st.pop();
                string temp = a+b+pre_exp[i];
                st.push(temp);
            }
        }
        return st.top();
    }
};
