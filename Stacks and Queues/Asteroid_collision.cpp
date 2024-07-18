class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st; // Stack to store asteroids after collisions

        for (int asteroid : asteroids) 
        {
            bool destroyed = false;
            // Process collisions only if the current asteroid is moving left
            while (!st.empty() && st.top() > 0 && asteroid < 0) {
                if (abs(st.top()) == abs(asteroid)) {
                    st.pop(); // Both asteroids destroy each other
                    destroyed = true;
                    break;
                } 
                else if (abs(st.top()) > abs(asteroid)) {
                    destroyed = true;
                    break; // The incoming asteroid is destroyed
                } 
                else {
                    st.pop(); // The asteroid in the stack is destroyed
                }
            }
            if (!destroyed) {
                st.push(asteroid); // The current asteroid survives and is added to the stack
            }
        }

        // Collect the remaining asteroids from the stack
        vector<int> ans(st.size());
        for (int i = st.size() - 1; i >= 0; --i) {
            ans[i] = st.top();
            st.pop();
        }

        return ans;
    }
};
