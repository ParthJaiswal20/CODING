class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        vector<int> store(size, 0);
        int inner;
        int count = 0;
        for (inner = 0; inner < size; inner++) {
            if (nums[inner] != 0) {
                store[count] = nums[inner];
                count++;
            }
        }
        for (inner = 0; inner < size; inner++) {
            nums[inner] = store[inner];
        }
    }
};