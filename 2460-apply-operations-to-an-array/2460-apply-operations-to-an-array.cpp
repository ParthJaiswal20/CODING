class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int size = nums.size();
        vector<int> store(size, 0);
        /*
        loop and find out the pairs where this condition
        nums[i] == nums[i + 1] satsifies
        */
        for (int i = 0; i < nums.size() - 1; i++) {
            /*
           then now when found those pairs then apply the operation
           on it
           */
            if (nums[i] == nums[i + 1]) {
                nums[i] = nums[i] * 2;
                nums[i + 1] = 0;
            }
        }

        // now move the zeros to the end
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                int num = nums[i];
                store[count] = num;
                count++;
            }
        }

        for (int i = 0; i < nums.size(); i++) {
            nums[i] = store[i];
        }
        return nums;
    }
};