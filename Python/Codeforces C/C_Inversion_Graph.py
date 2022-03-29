"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())
for _ in range(T):
    n = int(input())
    a = []
    m = 0
    c = 0
    a = [int(x) for x in input().split(' ')]
    i = 0
    for j in a:
        m = max(m,j)
        if(m == i+1):
            c += 1
        i += 1
    print(c)