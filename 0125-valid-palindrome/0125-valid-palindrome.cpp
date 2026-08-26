class Solution {
public:
    bool checkpalindrome(int a, string& s) {
        if (a >= s.size() / 2) {
            return true;
        }

        if (s[a] != s[s.size() - a - 1]) {
            return false;
        }

        return checkpalindrome(a + 1, s);
    }

    bool isPalindrome(string s) {
        string clean = "";

        // Remove non-alphanumeric characters and convert to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                clean += tolower(c);
            }
        }

        return checkpalindrome(0, clean);
    }
};