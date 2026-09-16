class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i = 0; i<nums.size();i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue; // this i am doing to void the duplicates 
            for(int j = i+1; j<nums.size();j++)
            {
                if(j !=(i+1) && nums[j] == nums[j-1]) continue;  // this is also to avoid the duplicates
                int k = j+1;  // as for example i is at 0th postn and j = i+1 = 1st postn and k = j+1 = 1+1 =2nd postn and l is at the right most side
// or u can say at the last index of the nums
                int l = nums.size()-1;
                while(k<l)   // the pointer which is moving is k and l only towards each other k --> <-- l .
                {
                    long long sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if(sum == target)
                    {
                        vector<int>temp = {nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        k++; l--;
                        while(k<l&& nums[k] == nums[k-1]) k++;  // this again to avoid the duplicates.
                        while(k<l&& nums[l] == nums[l+1]) l--;  // this again to avoid the duplicates.
                    }
                    else
                    if(sum<target) k++;
                    else l--;
                }
            }
        }
        return ans;
    }
};