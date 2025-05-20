// 2025-04-08

class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size();
        int ii = 0;
        int arr[101]{};
        for (int i = n - 1; i >= 0; --i) {
            if (!arr[nums[i]]) {
                arr[nums[i]]++;
            }
            else {
                ii = i / 3 + 1;
                if (ii*3 + 3 >= n) {
                    break;
                }
                if (nums[ii*3] == nums[ii*3+1] ||
                nums[ii*3] == nums[ii*3+2] ||
                nums[ii*3+1] == nums[ii*3+2]) {
                    ii++;
                }
                break;
            }
        }
        return ii;
    }
};
