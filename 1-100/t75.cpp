// 2025-5-17

class Solution {
public:
    void sortColors(vector<int>& nums) {
        if (nums.size() < 2) return;
        int n = nums.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (nums[i] > nums[j]) {
                    swap(nums[i], nums[j]);
                }
            }
        }
    }
};
