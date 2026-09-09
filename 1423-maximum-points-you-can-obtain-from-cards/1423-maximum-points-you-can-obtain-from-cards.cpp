class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int left;
        int right;
        int left_sum = 0;
        int right_sum = 0;
        int max_total = 0;
        int inner;
        int n = cardPoints.size();

        for (left = 0; left < k; left++) {
            left_sum = left_sum + cardPoints[left];
        }
        max_total = left_sum;
        right = n - 1;
        for (inner = k - 1; inner >= 0; inner--) {
            left_sum = left_sum - cardPoints[inner];
            right_sum = right_sum + cardPoints[right];
            max_total = max(max_total, left_sum + right_sum);

            right--;
        }

        return max_total;
    }
};
