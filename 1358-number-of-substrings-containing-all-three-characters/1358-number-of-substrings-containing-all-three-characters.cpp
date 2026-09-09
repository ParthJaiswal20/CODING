class Solution {
public:
    int numberOfSubstrings(string s) {
        int left = 0;
        int right = 0;
        int count_sub = 0;
        int size = s.size();
        int count[3] = {0}; // for a|b|c values holding

        while (right < size) {
            count[s[right] - 'a']++;
            right++;

            while (count[0] >= 1 && count[1] >= 1 && count[2] >= 1) {
                count_sub = count_sub + (size - right + 1);

                count[s[left] - 'a']--;
                left++;
            }
        }
        return count_sub;
    }
};

//         int inner;
//         int outer;
//         int cnt_sub = 0;
//         int cnt_a;
//         int cnt_b;
//         int cnt_c;
//         int size = s.size();

//         for (outer = 0; outer < size; outer++) {
//             cnt_a = 0;
//             cnt_b = 0;
//             cnt_c = 0;
//             for (inner = outer; inner < size; inner++) {
//                 if (s[inner] == 'a')
//                     cnt_a++;
//                 if (s[inner] == 'b')
//                     cnt_b++;
//                 if (s[inner] == 'c')
//                     cnt_c++;

//                 if (cnt_a >= 1 && cnt_b >= 1 && cnt_c >= 1) {
//                     cnt_sub++;
//                 }
//             }
//         }
//         return cnt_sub;