class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen = INT_MAX;
        int front = 0;
        int end = 0;
        int sum = 0;

        while (end < nums.size()) {
            sum = sum + nums[end];

            while (sum > target || sum == target) {
                int length = end - front + 1;
                minlen = min(minlen, length);
                sum = sum - nums[front];
                front++;
            }
            end++;
        }
        if(minlen == INT_MAX){
            return 0;
        }else{
            return minlen;
        }
    }
};