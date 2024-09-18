//longest successive elements
int longestSuccessiveElements(vector<int>&a){
    int n = a.size();
    if(n==0) return 0;
    int longest = 1; //min size of sub-array is 1
    unordered_set<int> st;

    for(int i=0;i<n;i++){
        st.insert(a[i]);  //putting vals into set
    }

    for(auto it: st){ //iterating the set
        if(st.find(it-1) == st.end()){ //if prev ele to current ele is not found in set then this is the starting point
            int cnt = 1;
            int x = it;
            while(st.find(x+1) != st.end()){ //till we get the next ele in set, we keep incrementing length and the value of ele
                x += 1;
                cnt += 1;
            }
            longest = max(longest,cnt);
        }
    }
    return longest;
}
