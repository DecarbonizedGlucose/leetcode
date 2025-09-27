class Solution:
    def areaOfTriangle(self, *points):
        A, B, C = points
        return abs(A[0]*B[1]+B[0]*C[1]+C[0]*A[1]-B[0]*A[1]-C[0]*B[1]-A[0]*C[1])/2

    def largestTriangleArea(self, points: List[List[int]]) -> float:
        n = len(points)
        maxS = -1
        for i in range(n-2):
            for j in range(i+1, n-1):
                for k in range(j+1, n):
                    maxS = max(maxS, self.areaOfTriangle(points[i], points[j], points[k]))
        return maxS
