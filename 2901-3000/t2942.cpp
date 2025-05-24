// 2025-05-24

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> rs;
        vector<string>::iterator itb = words.begin();
        int i;
        for (auto it=words.begin(); it!=words.end(); ++it) {
            i = it->find(x);
            if (i != -1) {
                rs.push_back(it-itb);
            }
        }
        return rs;
    }
};
