/*
 * @lc app=leetcode.cn id=3 lang=golang
 *
 * [3] 无重复字符的最长子串
 */
package main

// @lc code=start
func lengthOfLongestSubstring(s string) int {
	lens := len(s)
	windows := make(map[byte]int, lens)
	left, right, res := 0, 0, 0

	for right < lens {
		b := s[right]
		windows[b]++
		right++
		for windows[b] > 1 {
			c := s[left]
			windows[c]--
			left++
		}
		if right-left > res {
			res = right - left
		}
	}
	return res
}

// @lc code=end
