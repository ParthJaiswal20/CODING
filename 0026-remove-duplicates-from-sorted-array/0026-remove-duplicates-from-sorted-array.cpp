class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        int size = nums.size();
        for (int a = 0; a < size; a++) {
            int c = nums[a];
            st.insert(c);
        }
        int count = 0;
        for (int x : st) {
            nums[count] = x;
            count++;
        }
        return st.size();
    }
};