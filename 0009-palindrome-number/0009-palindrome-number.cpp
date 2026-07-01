class Solution {
public:
    bool isPalindrome(int x) {
        if (x == 0)
            return true;
        long long sum = 0;
        int rem;
        int num = x;
        while (num != 0) {
            rem = num % 10;
            sum = sum * 10 + rem;
            num = num / 10;
        }
        if (sum == x && x > 0)
            return true;
        else
            return false;
    }
};