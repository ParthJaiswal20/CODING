class Solution {
public:
    bool canweplace(vector<int>& position, int m, int distance) {
        int countmagnets = 1;
        int last = position[0];
        int outer;
        for (outer = 1; outer < position.size(); outer++) {
            if (position[outer] - last >= distance) {
                countmagnets++;
                last = position[outer];
            }
        }
        if (countmagnets >= m) {
            return true;
        } else {
            return false;
        }
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());
        int size = position.size();
        int low = 1;
        int high = position[size - 1];

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canweplace(position, m, mid) == true) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return high;
    }
};