class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        auto cmp = [&](vector<int>& a, vector<int>& b){
            return a[k] >= b[k];
        };
        auto res = score;
        sort(res.begin(), res.end(), cmp);
        return res;
    }
};
