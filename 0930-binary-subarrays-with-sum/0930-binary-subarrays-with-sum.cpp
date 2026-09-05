class Solution {
public:
    int numSubarraysWithSumHelper(vector<int>& nums,
                                  int goal) { // -> renamed to avoid ambiguity
        if (goal < 0)
            return 0;
        int l = 0, r = 0;
        int n = nums.size();
        int s = 0, ans = 0;
        while (r < n) {
            s += nums[r];
            while (s > goal) {
                s -= nums[l];
                l++;
            }
            ans += (r - l + 1);
            r++;
        }
        return ans;
    }

    int numSubarraysWithSum(vector<int> nums, int goal) {
        return numSubarraysWithSumHelper(nums, goal) -
               numSubarraysWithSumHelper(nums, goal - 1);
    }
};
