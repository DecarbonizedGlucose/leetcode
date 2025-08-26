// 2024-9-18

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> v = {0, 0};
        for (auto it1 = nums.begin(); it1!= nums.end(); it1++)
        {
            for (auto it2 = it1+1; it2!=nums.end(); it2++)
            {
                if (*it1+*it2 == target)
                {
                    v[0] = it1-nums.begin();
                    v[1] = it2-nums.begin();
                    return v;
                }
            }
        }
        return v;
    }
};
