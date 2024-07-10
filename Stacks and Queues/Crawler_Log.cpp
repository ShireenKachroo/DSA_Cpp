class Solution {
public:
    /*WITHOUT STACK*/
//     int minOperations(vector<string>& logs) {
//     int depth = 0;
//     for (const string& log : logs) {
//         if (log == "../") {
//             if (depth > 0) depth--;
//         } 
//         else if (log == "./") {
//             continue;
//         } 
//         else {
//             depth++;
//         }
//     }
//     return depth;
// }


    /*WITH STACK*/
   int minOperations(vector<string>& logs) {
    stack<string> st;
    for (const string& log : logs) {
        if (log == "../") {
            if (!st.empty()) {
                st.pop();
            }
        } else if (log == "./") {
            continue;
        } else {
            st.push(log);
        }
    }

    return st.size();
}

};
