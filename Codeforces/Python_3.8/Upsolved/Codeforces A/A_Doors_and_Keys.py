"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

import math 
T = int(input())
for _ in range(T):
    s = input()
    n = len(s)
    RK = 0
    GK = 0
    BK = 0
    for i in range(n):
        if(s[i] == 'r'):
            for j in range(i,n):
                if (s[j] == 'R'):
                    RK+=1
        if(s[i] == 'g'):
            for j in range(i,n):
                if (s[j] == 'G'):
                    GK+=1
        if(s[i] == 'b'):
            for j in range(i,n):
                if (s[j] == 'B'):
                    BK+=1
    if RK==GK and GK==BK and GK==1:
        print("YES")
    else:
        print("NO")
    # print(RK, GK, BK)
                     