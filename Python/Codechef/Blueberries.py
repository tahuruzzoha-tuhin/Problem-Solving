T = int(input())
for j in range(1,T+1):
    n, k = [int(x) for x in input().split(' ')]
    a = [int(x) for x in input().split(' ')]
    a.sort()
    p = 0
    # print(a)
    for i in range(1,n-1):
        if p<k:
            p += a[i]
    print(f"Scenario #{j}: {p}")