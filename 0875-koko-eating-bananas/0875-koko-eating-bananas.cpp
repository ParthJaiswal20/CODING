class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int outer;
        int size = piles.size();
        int max_ele = *max_element(piles.begin(), piles.end());
        int min_ele = *min_element(piles.begin(), piles.end());
        int low = 1;
        int high = max_ele;
        int ans = INT_MAX;

        while (low <= high) {
            long long store = 0;
            long long mid = low + (high - low) / 2;
            for (outer = 0; outer < size; outer++) {
                store += (piles[outer] + mid - 1) / mid;
            }
            if (store <= h) {
                ans = mid;
                // BCZ as we want the minimum value we need to go
                // more in the left side to have the minimum
                // speed of eating
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};