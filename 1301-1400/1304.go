func sumZero(n int) []int {
    arr := make([]int, 0)
    for i := -n+1; i < n; i+=2 {
        arr = append(arr, i)
    }
    return arr
}
