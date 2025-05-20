// 2025-05-20

class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> bn(n, 0);
        vector<int> cn(n, 0);
        bn[0] = nums[0];
        for (int i=1; i<n; ++i) {
            bn[i] = nums[i] - nums[i - 1];
        }
        for (auto q : queries) {
            if (q[1] == n-1) {
                bn[q[0]]--;
            }
            else {
                bn[q[0]]--;
                bn[q[1] + 1]++;
            }
        }
        cn[0] = bn[0];
        if (cn[0] > 0) {
            return false;
        }
        for (int i=1; i<n; ++i) {
            cn[i] = cn[i-1] + bn[i];
            if (cn[i] > 0) {
                return false;
            }
        }
        return true;
    }
};
