// 2025-05-21

class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& q, int k) {
        int n = nums.size();
        vector<int> bn(n, 0);
        bn[0] = nums[0];
        for (int i = 1; i < n; ++i) {
            bn[i] = nums[i] - nums[i-1];
        }
        for (int j=0; j<k; ++j) {
            bn[q[j][0]] -= q[j][2];
            if (q[j][1] + 1 < n) {
                bn[q[j][1] + 1] += q[j][2];
            }
        }
        int cur = 0;
        for (int i=0; i<n; ++i) {
            cur += bn[i];
            if (cur > 0) {
                return 0;
            }
        }
        return 1;
    }

    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int m = queries.size();
        int k = -1, l = 0, r = m, mid;
        while (l <= r) {
            mid = (l + r) / 2;
            if (isZeroArray(nums, queries, mid)) {
                k = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return k;
    }
};
