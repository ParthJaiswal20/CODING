class Solution {
public:
    int fib(int n) {
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        else {
            int last = fib(n - 1);
            int second_last = fib(n - 2);
            return last + second_last;
        }
    }
};