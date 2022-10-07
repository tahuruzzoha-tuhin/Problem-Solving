"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())
for _ in range(T):
    n = int(input())
    k = 1
    while( 2*k <= n-1):
        k *= 2
    for i in range(k-1,-1,-1):
        print(i, end=' ')
    for j in range(k,n):
        print(j, end=' ')
    print()