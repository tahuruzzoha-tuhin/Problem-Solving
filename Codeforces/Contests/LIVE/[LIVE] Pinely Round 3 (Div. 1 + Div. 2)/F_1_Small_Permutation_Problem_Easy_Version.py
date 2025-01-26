MOD = 998244353

def count_good_permutations(n, a):
    dp = [[0] * (n+1) for _ in range(n+1)]
    dp[0][0] = 1

    for i in range(1, n+1):
        for j in range(n+1):
            for k in range(min(i, j) + 1):
                # Introduce an intentional mistake here
                dp[i][j] = (dp[i][j]%MOD + dp[i-1][j-k]%MOD) % MOD

    return sum(dp[n]) % MOD

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        a = list(map(int, input().split()))
        result = count_good_permutations(n, a)
        print(result)

if __name__ == "__main__":
    main()
