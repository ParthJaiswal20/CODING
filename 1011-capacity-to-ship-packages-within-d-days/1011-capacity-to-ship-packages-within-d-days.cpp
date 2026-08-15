class Solution {
public:
    int finddays(vector<int>& weights, int cap) {
        int days = 1;
        int load = 0;
        for (int inner = 0; inner < weights.size(); inner++) {
            if (weights[inner] + load > cap) {
                days++;
                load = weights[inner];
            } else {
                load = load + weights[inner];
            }
        }
        return days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int front = *max_element(weights.begin(), weights.end());
        int a = 0;
        int ans = 0;
        while (a < weights.size()) {
            ans = ans + weights[a];
            a++;
        }
        int back = ans;
        while (front <= back) {
            int mid = front + (back - front) / 2;
            int numberofdays = finddays(weights, mid);
            if (numberofdays <= days) {
                back = mid - 1;
            } else {
                front = mid + 1;
            }
        }
        return front;
    }
};
