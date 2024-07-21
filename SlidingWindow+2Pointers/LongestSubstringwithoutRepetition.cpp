class Solution {
public:
/*BRUTE FORCE: GENERATE ALL SUBSTRINGS
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int len = 0;
        for(int i=0;i<n;i++){
            int hash[256] = {0};
            for(int j=i;j<n;j++){
                if(hash[s[j]] == 1)  break;
                
                len = max(len,j-i+1);
                hash[s[j]] = 1;
            }
        }
        return len;
    }*/

/*BETTER SOLUTION: 2pointers+sliding window*/
    int lengthOfLongestSubstring(string s) {
      vector < int > mpp(256, -1);
      int left = 0, right = 0;
      int n = s.size();
      int len = 0;
      while (right < n) {
        if (mpp[s[right]] != -1)
          left = max(mpp[s[right]] + 1, left);

        mpp[s[right]] = right;

        len = max(len, right - left + 1);
        right++;
      }
      return len;
    }

};
