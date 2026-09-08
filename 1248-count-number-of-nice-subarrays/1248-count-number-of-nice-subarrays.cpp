class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int right = 0;
        int left = 0;
        int count_odd = 0;
        int count_nice = 0;

        while (right < nums.size()) {
            if (nums[right] % 2 != 0) {
                count_odd++;
            }
            while (count_odd > k) {
                if (nums[left] % 2 != 0) {
                    count_odd--;
                }
                left++;
            }
            int temp = left;
            if (count_odd == k) {
                while (temp < nums.size() && nums[temp] % 2 == 0) {
                    count_nice++;
                    temp++;
                }
                count_nice++;
            }
            right++;
        }
        return count_nice;
    }
};