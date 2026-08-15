class Solution {
public:
    int minDays(vector<int>& bloomday, int m, int k) {
        int low = *min_element(bloomday.begin(), bloomday.end());
        int high = *max_element(bloomday.begin(), bloomday.end());
        int boundary = k; // this is used to check if the number
        // of flowers in a particular bouquet is == k or not

        // bouquets made
        int size = bloomday.size();
        int ans = high;
        long long store = 1LL * m * k;
        if (store > size) {
            return -1;
        }

        while (low <= high) {
            int count_bouquet = 0;
            // this variable will be used for the
            // counting of the number of

            int count = 0;
            // this variable is used to count the number of flowers
            // used in making a single bouquet
            int mid = low + (high - low) / 2;

            for (int i = 0; i < bloomday.size(); i++) {
                if (bloomday[i] <= mid) {
                    count += 1;
                } else {
                    count = 0;
                }

                if (count == boundary) {
                    count_bouquet += 1;
                    count = 0;
                }
            }
            if (count_bouquet >= m) {
                ans = min(ans, mid);
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};