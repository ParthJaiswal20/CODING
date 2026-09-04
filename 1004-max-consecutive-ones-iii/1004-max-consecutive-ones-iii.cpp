class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int size = nums.size();
        int left = 0;
        int right = 0;
        int max_count = INT_MIN;
        int count = 0;
        int check = k;

        while (right < size) {
            if (nums[right] == 1) {
                count++;
            }
            if (nums[right] == 0) {
                if (check != 0) {
                    count++;
                    check--;
                } else {
                    max_count = max(max_count, count);
                    while (check == 0) {

                        if (nums[left] == 0) {
                            check++;
                        }
                        count--;
                        left++;
                    }
                    count++;
                    check--;
                }
            }
            max_count = max(max_count, count);
            right++;
        }
        return max_count;
    }
};