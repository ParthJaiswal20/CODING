class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int max_ele = *max_element(nums.begin(), nums.end());
        int min_ele = *min_element(nums.begin(), nums.end());
        int low = 1;
        int high = max_ele;
        int ans = INT_MAX;

        while (low <= high) {
            int sum_quotient = 0;
            int mid = low + (high - low) / 2;
            for (int i = 0; i < nums.size(); i++) {
               sum_quotient += (ceil)((double)nums[i] / mid);
            }
            if (sum_quotient > threshold) {
                low = mid + 1;
            } else {
                high = mid - 1;
                ans = min(ans, mid);
            }
        }
        return ans;
    }
};