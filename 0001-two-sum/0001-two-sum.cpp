class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int inner = 0; inner < nums.size(); inner++) {
            for (int outer = inner + 1; outer < nums.size(); outer++) {
                int sum = nums[inner] + nums[outer];
                if (sum == target) {
                    return {inner, outer};
                }
            }
        }
        return {};
    }
};