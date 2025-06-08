// 2025-06-08

class Solution {
public:
    static bool cmp(int& a, int& b) {
        string A = to_string(a), B = to_string(b);
        return A.compare(B) < 0;
    }

    vector<int> lexicalOrder(int n) {
        vector<int> res;
        for (int num = 1; num <= n; ++num) {
            res.push_back(num);
        }
        sort(res.begin(), res.end(), cmp);
        return res;
    }
};
