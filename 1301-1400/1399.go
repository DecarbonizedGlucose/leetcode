func countLargestGroup(n int) int {
    m := [40]int{}
    max_i := 0
    res := 0
    for i := 1; i <= n; i++ {
        s := 0
        j := i
        for j > 0 {
            s += j % 10
            j /= 10
        }
        m[s]++
        if m[s] > m[max_i] {
            max_i = s
        }
    }
    for i := 1; i < 40; i++ {
        if m[max_i] == m[i] {
            res++
        }
    }
    return res
}
