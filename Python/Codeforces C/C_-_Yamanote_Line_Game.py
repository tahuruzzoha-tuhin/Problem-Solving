"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""



N = int(input())

from collections import defaultdict
dct = defaultdict(int)

for i in range(1,2 * N + 2):
    dct[i] = 0

for i in range(N * 2 + 1):
    if i % 2 == 0:
        value = list(dct.values())
        temp = value.index(0)
        for i,key in enumerate(dct.keys()):
            if i == temp:
                print(key)
                dct[key] = 1
    else:
        n = int(input())
        if n == 0:
            exit()
        else:
            dct[n] = 1




