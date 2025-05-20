// 2025-5-20

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.length() < 2) {
            return s.length();
        }
        int res = 0;
        int i = 0, n = s.length();
        int arr[128];
        memset(arr, -1, sizeof(arr));
        for (int j = 0; j < n; ++j) {
            if (arr[s[j]] >= i) {
                i = arr[s[j]] + 1;
            }
            arr[s[j]] = j;
            res = max(res, j - i + 1);
        }
        return res;
    }
};
