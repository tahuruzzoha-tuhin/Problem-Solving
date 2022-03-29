"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

import math 
T = int(input())
for _ in range(T):
    b,c = map(int, input().split(' '))  
    print(c//math.gcd(b,c))
        
