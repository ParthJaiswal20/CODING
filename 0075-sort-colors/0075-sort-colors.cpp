class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int inner;
        int count0 = 0;
        int count1 = 0;
        int count2 = 0;
        for (inner = 0; inner < size; inner++) {
            if (nums[inner] == 0)
                count0++;
            if (nums[inner] == 1)
                count1++;
            if (nums[inner] == 2)
                count2++;
        }
        for (inner = 0; inner < count0; inner++) {
            nums[inner] = 0;
        }
        for (inner = count0; inner < count0 + count1; inner++) {
            nums[inner] = 1;
        }
        for (inner = count0 + count1; inner < size; inner++) {
            nums[inner] = 2;
        }
    }
};