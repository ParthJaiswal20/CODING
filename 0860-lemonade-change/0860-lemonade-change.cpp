class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cnt_5 = 0;
        int cnt_10 = 0;
        // int cnt_20 = 0;
        int inner;

        for (inner = 0; inner < bills.size(); inner++) {
            if (bills[inner] == 5) {
                cnt_5++;
            }

            else if (bills[inner] == 10) {
                if (cnt_5 >= 1) {
                    cnt_5--;
                    cnt_10++;
                } else {
                    return false;
                }
            }

            else if (bills[inner] == 20) {
                if (cnt_5 >= 1 && cnt_10 >= 1) {
                    cnt_5 -= 1;
                    cnt_10 -= 1;
                } else if (cnt_5 >= 3) {
                    cnt_5 -= 3;
                    // cnt_20++;
                } else {
                    return false;
                }
            }
        }
        return true;
    }
};