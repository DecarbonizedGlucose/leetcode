// 2024-12-11

class Solution {
    public int[] sortedSquares(int[] nums) {
        int l = 0, r = nums.length - 1;
        int[] newArr = new int[nums.length];
        for (int i=nums.length-1; i>=0; --i) {
            if (nums[l]*nums[l] > nums[r]*nums[r]) {
                newArr[i] = nums[l]*nums[l];
                ++l;
            }
            else {
                newArr[i] = nums[r]*nums[r];
                --r;
            }
        }
        return newArr;
    }
}