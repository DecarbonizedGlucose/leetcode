class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int dp[200][200]{};
        dp[0][0] = triangle[0][0];
        int n = triangle.size();
        for (int i=1; i<n; ++i) {
            for (int j=0; j<=i; ++j) {
				if (j == 0) dp[i][0] = dp[i-1][0] + triangle[i][0];
				else if (j == i) dp[i][i] = dp[i-1][i-1] + triangle[i][i];
				else dp[i][j] = min(dp[i-1][j-1], dp[i-1][j]) + triangle[i][j];
			}
		}
		int res = 0x7fffffff;
		for (int i=0; i<n; ++i) {
			res = min(res, dp[n-1][i]);
		}
		return res;
    }
};
