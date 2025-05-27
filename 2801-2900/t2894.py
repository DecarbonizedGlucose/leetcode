# 2025-05-27

class Solution:
    def differenceOfSums(self, n: int, m: int) -> int:
        cnt = n // m
        num2 = (m + m * cnt) * cnt / 2
        num1 = (1 + n) * n / 2 - num2
        return int(num1 - num2)
