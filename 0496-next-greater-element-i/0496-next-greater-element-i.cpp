class Solution {
public:
    int findNGE(int a, vector<int>& nums2) {
        stack<int> st;
        int n = nums2.size();
        vector<int> res(n);

        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if (st.empty()) {
                res[i] = -1;
            }
            else {
                res[i] = st.top();
            }

            st.push(nums2[i]);
        }

        int val = res[a];
        return val;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> Final_store;
        int a = 0;
        int size = nums1.size();

        while (a != size) {
            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] == nums1[a]) {
                    int c = findNGE(i, nums2);
                    Final_store.push_back(c);
                    break;
                }
            }

            a++;
        }

        return Final_store;
    }
};