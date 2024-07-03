class Solution 
{
    bool knows(vector<vector<int>>&M, int a, int b){
        if(M[a][b] == 1)  return true;
        return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        
        //pushing all elements into stack
        for(int i=0;i<n;i++){
            st.push(i);
        }
        
        //pick 2 ele from stack and check for possible candidate
        while(st.size() > 1){
            int a  = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(knows(M,a,b))  st.push(b);
            else st.push(a);
        }
        
        //store the possible candidate
        int candidate = st.top();
        
        //check if row of possible celeb is fully 0
        bool rowChk = false;
        int zeroCnt = 0;
        for(int i=0;i<n;i++){
            if(M[candidate][i] == 0) zeroCnt++;
        }
        if(zeroCnt == n) rowChk = true;
        
        //check if col of possible celeb is fully 1 
        bool colChk = false;
        int oneCnt = 0;
        for(int i=0;i<n;i++){
            if(M[i][candidate] == 1) oneCnt++;
        }
        if(oneCnt == n-1) colChk = true;
        
        //if celeb knows noone and everyone knoes celeb...the candidate id surely a celeb
        if(rowChk == true && colChk == true)  return candidate;
        
        return -1;  //no celeb found
    }
    
};
