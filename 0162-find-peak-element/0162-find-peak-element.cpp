/*
You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is
always considered to be strictly greater than a neighbor that is outside the
array.

these lines are for the edge cases when we are at the corner like if we are in
the 0th index then no need to compare it with the -1 index bcz 0th index element
is STRICTLY greater than that element that is outside the array

similarly

if we are in the last index then no need to compare it with the last+1 index bcz
last index element is STRICTLY greater than that element that is outside the
array
*/
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        int low = 0;
        int high = size - 1;
        if (size == 1) {
            return 0;
        }
        if (nums[low] > nums[low + 1]) {
            return low;
        }
        if (nums[high] > nums[high - 1]) {
            return high;
        }

        low = 1;
        high = size - 2;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] > nums[mid + 1] && nums[mid] > nums[mid - 1]) {
                return mid;
            } else if (nums[mid] > nums[mid - 1]) {
                low = mid + 1;
            } else if (nums[mid] > nums[mid + 1]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return -1;
    }
};