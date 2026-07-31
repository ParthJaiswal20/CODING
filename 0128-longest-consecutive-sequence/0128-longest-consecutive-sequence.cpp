// over here in this we question we are given an
// array that contains the numbers in it and those numbers are
// jumbeled
// from that numbers u have to find me the
// CONSECUTIVE + LONGEST SEQUENCE

// u can manipulate the array
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> st;
        int outer;
        int size = nums.size();
        int mover;
        int max_count = 0;
        int count = 0;

        for (outer = 0; outer < nums.size(); outer++) {
            int a = nums[outer];
            st.insert(a);
        }

        if (!st.empty()) {
            mover = *st.begin();
        }

        for (int x : st) {
            if (mover == x) {
                count++;
                mover++;
                if (count > max_count) {
                    max_count = count;
                }
            } else if (mover != x) {
                mover = x+1;
                count = 1;
            }
        }
        if (max_count >= 0) {
            return max_count;
        } else {
            return 0;
        }
    }
};