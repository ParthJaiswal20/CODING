class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int outer;
        int size = nums.size();
        int target = size / 2;

        for (int x : nums) {
            mpp[x]++;
        }

        for (auto it : mpp) {
            if (it.second > target) {
                return it.first;
            }
        }
        return -1;
    }
};