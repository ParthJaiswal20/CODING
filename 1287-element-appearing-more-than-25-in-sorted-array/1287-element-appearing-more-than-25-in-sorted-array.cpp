class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int size = arr.size();
        int bndry = (size * 25)/100;

        for(int inner = 0; inner< size; inner++){
            mpp[arr[inner]]++;
        }

        for(auto it: mpp){
            if(it.second > bndry){
                return it.first;
            }
        }
        return 0;
    }
};