"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())


for _ in range(T):
    # n = int(input())
    S = input()
    Ss = []
    for x in S:
        Ss.append(x)
    Ss.sort()

    for y in Ss:
        print(y, end='')
    print()