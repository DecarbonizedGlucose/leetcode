class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        res = [[1]]
        for i in range(1, numRows):
            res.append([0]*(i+1))
            res[i][0] = 1
            for j in range(1, i):
                res[i][j] = res[i-1][j-1] + res[i-1][j]
            res[i][-1] = 1
        return res
