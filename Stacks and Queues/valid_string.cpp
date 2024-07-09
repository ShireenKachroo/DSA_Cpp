int findMinimumCost(string str) {
  //odd length--->no moves
  if(str.length()%2 == 1)  return -1;

  stack<char>st;
  //iterating the whole string
  for(int i=0; i<str.length(); i++){
    char ch = str[i];
    //if opening parenthesis encountered, push it in stack;
    if(ch == '{'){
      st.push(ch);
    }
    //closing parenthesis encountered
    else
    {
      //if the stack isn't empty and topmost ele is { the pop it out
      if(!st.empty() && st.top() == '{'){
        st.pop();
      }

      else {
        st.push(ch);
      }
    }
  }
  // a = count of } parenthesis and  b = count of { parenthesis
  int a = 0, b = 0;
  while(! st.empty()){
    if(st.top() == '{')  b++;
    else a++;
    st.pop();
  }
  int ans = (a+1)/2 + (b+1)/2;
  return ans;
}
