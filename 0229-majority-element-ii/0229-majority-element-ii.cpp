class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> mpp;
        vector<int>store;
        int freq = nums.size() / 3;
        int size = nums.size();

        for (int outer = 0; outer < size; outer++) {
            mpp[nums[outer]]++;
        }

        for (auto x : mpp) {
            if (x.second > freq){
                store.push_back(x.first);
            }
        }
        return store;
    }
};