            // THIS IS DONE USING THE LOWER BOUND 
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int outer;
        int high = size - 1;
        int low = 0;
        int ans;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] >= target) {
                ans = mid;
                high = mid-1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};