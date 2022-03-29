"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

import math 
T = int(input())
for _ in range(T):
    n = int(input())
    s = input()
    s1 = s
    a = set()
    j = 1
    for i in range(1,n):
        if(s[i-1]  != s[i]):
            j += 1
        a.add(s[i])
    
    print(j)
    # print(a)

