t = int(input())
for _ in range(t):
    n = int(input())
    c = list(map(int, input().split()))
    dp = [[float('inf')]*(n+1) for _ in range(n+1)]
    dp[0][0] = 0
    for i in range(1, n+1):
        for j in range(i):
            if c[i-1] != n-i+1:
                dp[i][j+1] = min(dp[i][j+1], dp[j][j] + 1)
            dp[i][j] = min(dp[i][j], dp[j][j])
    ans = [dp[n][k] for k in range(1, n+1)]
    print(*ans)
