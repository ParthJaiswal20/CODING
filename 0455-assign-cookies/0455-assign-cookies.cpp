/*
sort them such that no confusion of matching
traverse in g
+
traverse in s
 if g[i] > = s[i]
 count++;
 continue ;
 else
 if(g[i] > s[i]){
 move s[i]
 }
*/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int cookiesNums = s.size();
        if (cookiesNums == 0)
            return 0;
        int count = 0;
        int mover_s = 0;
        int mover_g = 0;

        while (mover_g < g.size() && mover_s < s.size()) {
            if (g[mover_g] <= s[mover_s]) {
                count++;
                mover_g++;
                mover_s++;
            } else if (g[mover_g] > s[mover_s]) {
                mover_s++;
            }
        }
        return count;
    }
};