// 2025-06-14

class Solution {
public:
    int minMaxDifference(int num) {
        vector<int> ns;
        int mmax = 0, mmin = 0;
        while (num) {
            ns.push_back(num % 10);
            num /= 10;
        }
        auto mit = ns.rbegin();
        for (; mit != ns.rend() && *mit == 9; ++mit);
        int imax = mit == ns.rend() ? -1 : *mit;
        for (auto it = ns.rbegin(); it != ns.rend(); ++it) {
            mmax *= 10;
            mmin *= 10;
            if (*it == imax) {
                mmax += 9;
            }
            else {
                mmax += *it;
            }
            if (*it != ns.back()) {
                mmin += *it;
            }
        }
        return mmax - mmin;
    }
};
