class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        auto _Nums = nums;
        int n = nums.size();
        sort(_Nums.begin(), _Nums.end());
        int i = n-1, j = n-2;
        while (i > 1 && j > 0) {
            int k = j-1;
            if (_Nums[i] < _Nums[j] + _Nums[k]) {
                return _Nums[i] + _Nums[j] + _Nums[k];
            } else {
                --i, --j;
            }
        }
        return 0;
    }
};
