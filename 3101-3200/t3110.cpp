class Solution {
public:
    int scoreOfString(string s) {
        int res = 0;
        for (auto it = s.begin() + 1; it != s.end(); ++it) {
            res += abs(*it - *(it - 1));
        }
        return res;
    }
};
