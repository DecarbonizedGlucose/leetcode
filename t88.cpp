// 2025-04-02

class Solution {
public:
	static void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		vector<int> tmp;
		int i = 0, j = 0;
		while (i < m && j < n) {
			if (nums1[i] < nums2[j]) {
				tmp.push_back(nums1[i]);
				++i;
			}
			else {
				tmp.push_back(nums2[j]);
				++j;
			}
		}
		while (i < m) {
			tmp.push_back(nums1[i]);
			++i;
		}
		while (j < n) {
			tmp.push_back(nums2[j]);
			++j;
		}
		nums1.assign(tmp.begin(), tmp.end());
	}
};
