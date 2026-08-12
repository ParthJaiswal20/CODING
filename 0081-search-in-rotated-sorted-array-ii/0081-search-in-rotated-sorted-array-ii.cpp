class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int size = nums.size();
        int outer;

        for (outer = 0; outer < size; outer++) {
            if (nums[outer] == target) {
                return true;
            }
        }
        return false;
    }
};