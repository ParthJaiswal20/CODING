class Solution {
public:
    bool check(vector<int>& nums) {
        int a = nums.size();
        int count = 0;
        int b;
        for (b = 0; b < a; b++) {
            if(nums[b] > nums[(b+1)%a]){
                count++;
            }
        }
        return count <= 1;
    }
};
/* return karo true if and only if u find out that the array was originally
sorted in increasing order. duplicates can be present.

*/