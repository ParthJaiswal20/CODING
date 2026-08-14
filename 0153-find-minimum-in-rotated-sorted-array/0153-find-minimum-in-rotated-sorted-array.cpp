/*
1) given an array NUMS --> length n --> and have been rotated --> also it was
sorted before the rotating had happened
2) it contains UNIQUE ELEMENTS IN IT
3)return the minimum element in this array

HERE IT IS NOT SAID THAT IS THIS LEFT ROTATED OR RIGHT ROTATED , SO I AM JUST
ASSUMING THAT THIS IS LEFT ROTATED AND I AM DOING ON THAT BASIS
*/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int end = nums.size() - 1;
        int mid;
        int ans = INT_MAX;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (nums[start] <= nums[mid]) { // left part is sorted
                ans = min(ans, nums[start]);
                start = mid + 1;
            } else if (nums[mid] < nums[end]) { // right part is sorted
                ans = min(ans, nums[mid]);
                end = mid - 1;
            }
        }
        return ans;
    }
};