class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int inner;
        int size = nums.size();
        int count = 0;
        int max_count = 0;
        for (inner = 0; inner < size; inner++) {

            if (nums[inner] == 1) {
                ++count;
                if (max_count < count) {
                    max_count = count;
                }
            } else {
                count = 0;
            }
        }
        return max_count;
    }
};