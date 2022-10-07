"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""




T = int(input())
for _ in range(T):
    n,x = [int(x) for x in input().split(' ')]
    a = [int(x) for x in input().split(' ')]

    previous = 0
    max_sum = []
    sub_array_sum = []
    for i in range(50000+10):
        max_sum.append(-500000)
        sub_array_sum.append(-500000)
    for i in range(n):
        sum = 0
        for j in range(i, n):
            sum += a[j]
            max_sum[j-i] = max( max_sum[j-i], sum)
            previous = max(previous, sum)
    
    for i in range(n-1,-1,-1):
        sub_array_sum[i] = max( sub_array_sum[i], max_sum[i])

    for cnt in range(n+1):
        current = max( previous, sub_array_sum[cnt]+cnt*x)
        print(current, end=' ')
        previous = current
    print()
