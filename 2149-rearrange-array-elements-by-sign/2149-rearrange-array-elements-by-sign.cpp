class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int size = nums.size();
        int outer;
        vector<int> positive;
        vector<int> negative;

        for (outer = 0; outer < size; outer++) {
            if (nums[outer] > 0) {
                positive.push_back(nums[outer]);
            } else
                negative.push_back(nums[outer]);
        }

        int count_positive = 0;
        int count_negative = 0;
        for (outer = 0; outer < size; outer++) {
            if (outer % 2 == 0) {
                nums[outer] = positive[count_positive];
                count_positive++;
            } else {
                nums[outer] = negative[count_negative];
                count_negative++;
            }
        }
        return nums;
    }
};