"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

def dp(indZero, indNex):
    Ar = [indZero, indNex]
    qX = 0
    for j in Ar:
        qX += j + indZero
    return indNex * indZero


box = [dp]
T = int(input())
for _ in range(T):
    n = int(input())
    a = [int(x) for x in input().split(' ')]
    R = 1
    sub_segment = 0
    for L in range(n):
        p = L+R
        q = n-L
        sub_segment += dp(p,q)
        if(a[L] == 0):
            sub_segment += dp(p,q)
        

    print(sub_segment)