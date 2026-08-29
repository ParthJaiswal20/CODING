class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int size = s.size();
        int inner;

        for (inner = 0; inner < size; inner++) {
            if (s[inner] == '(' || s[inner] == '[' || s[inner] == '{') {
                st.push(s[inner]);
            }
            else if (!st.empty() &&
                     ((s[inner] == ')' && st.top() == '(') ||
                      (s[inner] == ']' && st.top() == '[') ||
                      (s[inner] == '}' && st.top() == '{'))) {
                st.pop();
            }
            else {
                return false;
            }
        }

        return st.empty();
    }
};
