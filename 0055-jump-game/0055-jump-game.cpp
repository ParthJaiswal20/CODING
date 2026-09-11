class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex = 0;
        int size = nums.size();
        int inner;
        for (inner = 0; inner < size; inner++) {
            if (inner > maxIndex) {
                return false;
            }
            maxIndex = max(maxIndex, inner + nums[inner]);
        }
        return true;
    }
};