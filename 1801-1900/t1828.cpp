class Solution {
public:
    bool in_circle(vector<int>& p1, vector<int>& p2) {
        double dis = sqrt(pow(p1[0]-p2[0], 2) + pow(p1[1]-p2[1], 2));
        return dis <= p2[2];
    }

    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;
        for (auto& q : queries) {
            int a = 0;
            for (auto& p : points) {
                a += int(in_circle(p, q));
            }
            ans.push_back(a);
        }
        return ans;
    }
};
