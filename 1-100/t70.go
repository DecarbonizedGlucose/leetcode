func climbStairs(n int) int {
    m := make(map[int]int)
    m[1] = 1
    m[2] = 1
    var fab func(int)int
    fab = func(n int) int {
        if fn, ok := m[n]; ok {
            return fn
        }
        if n==1 || n==2 {
            return 1
        } else {
            res := fab(n-1) + fab(n-2)
            m[n] = res
            return res
        }
    }
    return fab(n+1)
}
