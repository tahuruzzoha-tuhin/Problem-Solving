"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())
for _ in range(T):
    n = int(input())
    a = [int(x) for x in input().split(' ')]
    i = 0
    m = 1000000
    p = a[0]
    c = 0
    for j in a:
        if(p>j):
            c += 1
        else:
            p = j
        
    if(c):
        print("YES")
    else:
        print("NO")