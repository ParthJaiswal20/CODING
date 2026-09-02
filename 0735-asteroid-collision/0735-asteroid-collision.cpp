class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int inner;
        int size = asteroids.size();
        vector<int> ans;

        for (inner = 0; inner < size; inner++) {

            int val = asteroids[inner];
            if (st.empty()) {
                st.push(val);
            } else {
                bool flag = true;
                int top = st.top();
                if (top > 0 && val > 0) {
                    st.push(val);
                } else if (top < 0 && val < 0) {
                    st.push(val);
                } else if (top < 0 && val > 0) {
                    st.push(val);
                } else if (top > 0 && val < 0) {

                    while (!st.empty() && st.top() > 0) {
                        int a = st.top();
                        if (a < abs(val)) {
                            st.pop();
                            continue;
                        } else if (a == abs(val)) {
                            st.pop();
                            flag = false;
                            break;
                        } else {
                            flag = false;
                            break;
                        }
                    }
                    if (flag == true) {
                        st.push(val);
                    }
                }
            }
        }
        while (!st.empty()) {
            int a = st.top();
            st.pop();
            ans.push_back(a);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};