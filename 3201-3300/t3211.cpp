class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string> res;
        string path(n, 0);
        function<void(int)> dfs = [&](int u){
            if (u == n) {
                // 新结果
                res.push_back(path);
                return;
            }
            if (u == 0 || u != 0 && path[u-1] == '1') {
                path[u] = '0';
                dfs(u+1);
                path[u] = '1';
                dfs(u+1);
            } else {
                path[u] = '1';
                dfs(u+1);
            }
        };
        dfs(0);
        return res;
    }
};
