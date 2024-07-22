class Solution {
  public:
    int totalFruits(int N, vector<int> &fruits) {
        /*BRUTE FORCE
        int maxLen = 0;
        for(int i=0;i<N;i++){
            set<int>st;
            for(int j=i;j<N;j++){
                st.insert(fruits[j]);
                if(st.size() <= 2){
                    maxLen = max(maxLen, j-i+1);
                }
                else break;
            }
        }*/
        
        
        /*OPTIMISATION
        int l = 0, r = 0, maxLen = 0;
        map<int, int>mpp;
        
        while(r < N){
            mpp[fruits[r]]++;
            
            if(mpp.size() > 2){
                while(mpp.size() > 2){
                    mpp[fruits[l]]--;
                    
                    if(mpp[fruits[l]] == 0)  mpp.erase(mpp[fruits[l]]);
                    
                    l++;
                }
            }
            if(mpp.size() <= 2){
                maxLen = max(maxLen,r-l+1);
            }
            r++;
        }*/
        
        
 /*MOST OPTIMAL SOLUTION*/
    int l = 0, r = 0, maxLen = 0;
    map<int, int> mpp;
    
    while (r < N) {
        mpp[fruits[r]]++;
        
        while (mpp.size() > 2) {
            mpp[fruits[l]]--;
            if (mpp[fruits[l]] == 0) {
                mpp.erase(fruits[l]);  // Correct the erasing step
            }
            l++;
        }
        
        if (mpp.size() <= 2) {
            maxLen = max(maxLen, r - l + 1);
        }
        r++;
    }
    
    return maxLen;
}

};
