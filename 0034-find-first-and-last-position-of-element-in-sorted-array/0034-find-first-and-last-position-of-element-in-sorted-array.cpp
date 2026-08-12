class Solution {
public:
    int leftside(int leftlow, int lefthigh, vector<int>& nums, int target) {

        int first = -1;

        while (leftlow <= lefthigh) {

            int leftmid = leftlow + (lefthigh - leftlow) / 2;

            if (nums[leftmid] == target) {
                first = leftmid;
                lefthigh = leftmid - 1;
            } else if (nums[leftmid] > target) {
                lefthigh = leftmid - 1;
            } else {
                leftlow = leftmid + 1;
            }
        }

        return first;
    }

    int rightside(int rightlow, int righthigh, vector<int>& nums, int target) {

        int second = -1;

        while (rightlow <= righthigh) {

            int rightmid = rightlow + (righthigh - rightlow) / 2;

            if (nums[rightmid] == target) {
                second = rightmid;
                rightlow = rightmid + 1;
            } else if (nums[rightmid] > target) {
                righthigh = rightmid - 1;
            } else {
                rightlow = rightmid + 1;
            }
        }

        return second;
    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int size = nums.size();

        if (size == 0)
            return {-1, -1};

        int low = 0;
        int high = size - 1;

        int found = -1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                found = mid;
                break;
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if (found == -1)
            return {-1, -1};

        int first = leftside(0, found, nums, target);

        int second = rightside(found, size - 1, nums, target);
        return {first, second};
    }
};