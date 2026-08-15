class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;
        int outer;

        for (outer = 0; outer < nums.size(); outer++) {
            if (nums[outer] == 0) {
                count_0++;
            } else if (nums[outer] == 1) {
                count_1++;
            } else {
                count_2++;
            }
        }
        for (outer = 0; outer < count_0; outer++) {
            nums[outer] = 0;
        }
        for (outer = count_0; outer < count_0 + count_1; outer++) {
            nums[outer] = 1;
        }
        for (outer = count_0 + count_1; outer < count_0 + count_1 + count_2;
             outer++) {
            nums[outer] = 2;
        }
    }
};