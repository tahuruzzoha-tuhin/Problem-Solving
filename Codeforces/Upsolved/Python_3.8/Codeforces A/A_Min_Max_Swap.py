"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())


for _ in range(T):
    n = int(input())
    a = [int(x) for x in input().split(' ')]
    b = [int(x) for x in input().split(' ')]
    for i in range(n):
        if a[i]<b[i]:
            tmp = b[i]
            b[i] = a[i]
            a[i] = tmp
    a.sort()
    b.sort()
    print(b[n-1]*a[n-1])