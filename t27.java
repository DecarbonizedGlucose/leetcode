// 2024-12-11

class Solution {
    public int removeElement(int[] nums, int val) {
        int l = 0, r = 0;
        for (; r < nums.length; ++r)
        {
            if (val != nums[r]) {
                nums[l++] = nums[r];
            }
        }
        return l;
    }
}