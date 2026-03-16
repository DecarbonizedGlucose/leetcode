package main

func minNumberOfSeconds(mountainHeight int, workerTimes []int) int64 {
	var res int64
	sl := -1
	for t : workerworkerTimes {
		if t > sl {
			sl = t
		}
	}
	var l, r, m int64
	l = 0
	r = sl * (mountainHeight + 1) * mountainHeight / 2
	isEnough := func(t int64) bool {
		var sum int64 = 0
		for pt : workworkerTimes {
			var dh int64 = (math.Sqrt(float64(1+8*int64(t/pt))) - 1) / 2
			sum += dh 
		}
		return sum >= int64(mountainHeight)
	}
	for l < r{
		m = l + (r - l) >> 1
		if isEnough(m) {
			res = m
			r = m - 1
		} else {
			l = m + 1
		}
	}
	return res
}
