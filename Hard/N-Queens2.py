#Problem: https://leetcode.com/problems/n-queens-ii/description/
'''
The n-queens puzzle is the problem of placing n queens on an n x n chessboard such that no two queens attack each other.

Given an integer n, return the number of distinct solutions to the n-queens puzzle.
'''

class Solution:
    def totalNQueens(self, n):
        def dfs(board, i, c1, c2, c3):
            if i == n: self.ans += 1
            
            for j in range(n):
                if c1 & 1<<j or c2 & 1<<i-j+n or c3 & 1<<i+j: continue
                dfs(board + [j], i + 1, c1 ^ 1<<j, c2 ^ 1<<i-j+n, c3 ^ 1<<i+j)
        
        self.ans = 0
        dfs([], 0, 0, 0, 0)
        return self.ans