/*
 * @lc app=leetcode.cn id=76 lang=golang
 *
 * [76] 最小覆盖子串
 */
package main

// @lc code=start
func minWindow(s string, t string) string {
	lens := len(s)
	lent := len(t)

	window := make(map[byte]int, lens)
	target := make(map[byte]int, lent)

	left, right, vaild := 0, 0, 0
	res := lens
	start := -1

	for i := 0; i < lent; i++ {
		target[t[i]]++
	}
}

// @lc code=end
