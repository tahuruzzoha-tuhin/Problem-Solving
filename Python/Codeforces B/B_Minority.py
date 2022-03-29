"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())
for _ in range(T):
    s = input()
    n = len(s)
    cnt0 = 0
    cnt1 = 0
    for i in range(n):
        if s[i] == '0':
            cnt0 += 1
        else:
            cnt1 += 1

    p = min(cnt0, cnt1, (n-1)//2)
    print(p)