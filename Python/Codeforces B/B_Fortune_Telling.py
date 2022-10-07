"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""


T = int(input())
for k in range(T):
    n, x, y = [int(x) for x in input().split(' ')]
    a = map(int, input().split())
    xor = x
    for i in a:
        xor^= i
    if xor%2 == y%2:
        print('Alice')
    else:
        print('Bob')
