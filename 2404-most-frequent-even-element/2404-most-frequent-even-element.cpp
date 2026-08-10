class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int outer;
        int size = nums.size();
        int element;
        int freq_store = 0;

        for (outer = 0; outer < size; outer++) {
            if (nums[outer] % 2 == 0) {
                mpp[nums[outer]]++;
            }
        }
        if (mpp.empty()) {
            return -1;
        } else {
            element = mpp.begin()->first;
            freq_store = mpp.begin()->second;

            for (auto it : mpp) {
                if(it.second > freq_store){
                    element = it.first;
                    freq_store = it.second;
                }else if(it.second == freq_store){
                    int a = it.first;
                    int b = element;
                    element = min(a,b);
                }
            }
            return element;
        }
    }
};