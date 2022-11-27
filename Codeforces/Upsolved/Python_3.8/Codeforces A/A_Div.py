"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())
for _ in range(T):
    n = int(input())
    if n%7 == 0:
        print(n)
    else:
        for i in range(10+1):
            if (n - n%10 + i)%7 == 0:
                print(n - n%10 + i)
                break