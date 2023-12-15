"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())


for _ in range(T):
    n, k = [int(x) for x in input().split(' ')]
    i = 0
    j = 2
    p = 1
    q = 3
    if(n==k or n-k == 1):
        print(-1)
    else:
        for p in range(1, n+1):
            if (i&q)+(j&p) == k:
                print(i,q)
                print(j,p)
                i += 1
                j += 1
                p += 1
                q += 1
    