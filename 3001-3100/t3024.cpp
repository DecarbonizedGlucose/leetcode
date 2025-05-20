// 2025-5-19

class Solution {
public:
    string triangleType(vector<int>& nums) {
        int c=0;
        for (int i=0;i<3;++i) {
            if (nums[(i+0)%3]+nums[(i+1)%3]<=nums[(i+2)%3]){
                return "none";
            }
            if (nums[(i+0)%3]==nums[(i+1)%3]){
                ++c;
            }
        }
        switch (c){
            case 0: return "scalene";
            case 1: return "isosceles";
            default: return "equilateral";
        }
    }
};
