/*-----BRUTE FORCE APPROACH-----*/
class StockSpanner {
public:
vector<int>arr;
    StockSpanner() {
        /*default constructor*/
       //initialise the empty arr
       arr = {};
    }
    
    int next(int price) {
        arr.push_back(price);
        int cnt = 1;  //current ele included
        for(int i = arr.size()-2; i>=0; i--){
            if(arr[i] <= price) cnt++;
            else break;
        }
        return cnt;
    }
};

/*-----OPTIMISED CODE-----*/
class StockSpanner {
public:
stack<pair<int,int>>st;
int index = -1;
    StockSpanner() {
        /*default constructor*/
        index = -1;
        while(!st.empty()) st.pop();
    }
    
    int next(int price) {
        index = index+1;
        while(!st.empty() && st.top().first <= price)  st.pop();
        int ans = index-(st.empty()?-1:st.top().second);
        st.push({price,index});
        return ans;
    }
};
