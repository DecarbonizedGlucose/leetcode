// 2025-04-27

class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        for (int i = 0; i < n-2; ++i) {
            if (2*(nums[i]+nums[i+2]) == nums[i+1]){
                ++res;
            }
        }
        return res;
    }
};
