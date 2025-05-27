// 2025-05-27

class Solution {
public:
    int differenceOfSums(int n, int m) {
        int res = 0;
        for (int i = 1; i <= n; ++i) {
            if (i % m) res += i;
            else res -= i;
        }
        return res;
    }
};
