"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""
ar = []
def swap(a, b):
    tmp = a
    a = b
    b = tmp

T = int(input())
for _ in range(T):
    n = int(input())
    ar = [int(x) for x in input().split(' ')]
    for i in range(n):
        if ar[i] != i+1:
            num = ar.index(i+1)
            ar[i:num+1] = reversed(ar[i:num+1])
            break
    for i in ar:
        print(i, end=' ')
    print()