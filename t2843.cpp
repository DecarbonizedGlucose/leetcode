// 2025-04-11

class Solution {
public:
    bool isSymmetricInteger(int num) {
        if (num < 10) {
            return 0;
        }
        else if (num >= 10 && num < 100) {
            return (num/10 == num%10) ? 1 : 0;
        }
        else if (num >= 100 && num < 1000) {
            return 0;
        }
        else if (num >= 1000 && num < 10000) {
            int a = num % 10;
            num /= 10;
            a += num % 10;
            num /= 10;
            int b = num % 10 + num / 10;
            return (a == b) ? 1 : 0;
        }
        else {
            return 0;
        }
    }
    
    int countSymmetricIntegers(int low, int high) {
        int _cnt = 0;
        for (int i=low; i<=high; ++i) {
            if (isSymmetricInteger(i)) {
                ++_cnt;
            }
        }
        return _cnt;
    }
};
