//          USING MOORES VOTING ALGORITHM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        int el;
        int outer;

        for (outer = 0; outer < size; outer++) {
            if (count == 0) {
                count = 1;
                el = nums[outer];
            } else if (nums[outer] == el) {
                count++;
            } else {
                count--;
            }
        }
        int count1 = 0;
        for (outer = 0; outer < size; outer++) {
            if (nums[outer] == el) {
                count1++;
            }
        }
        if (count1 > size / 2) {
            return el;
        }
        return -1;
    }
};