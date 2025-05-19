// 2025-04-02

class Solution {
	public:
	static double findMaxAverage(vector<int>& nums, int k) {
		vector<int> dn(nums.size() + 1, 0);
		for (int i = 0; i < nums.size(); ++i) {
			dn[i+1] = nums[i] + dn[i];
		}
		double res = -(0x7fffffff), ans = 0;
		for (int i=0; i<=nums.size()-k; ++i) {
			ans = (double)(dn[i + k] - dn[i]) / k;
			res = max(res, ans);
		}
		return res;
	}
};
