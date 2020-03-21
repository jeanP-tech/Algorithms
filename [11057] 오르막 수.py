import sys
input = sys.stdin.readline

n = int(input())
dp = [[0] * 11 for _ in range(n + 1)]
dp[0] = [1 for _ in range(11)]

for i in range(1, n + 1):
    for j in range(1, 11):
        dp[i][j] = (dp[i-1][j] + dp[i][j-1]) % 10007

print(dp[n][10])
