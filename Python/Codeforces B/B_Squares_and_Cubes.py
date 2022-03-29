"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""



t = int(input())
for j in range(t):
    n = int(input())
    sq = {''}
    sq.remove('')
    b = 0
    p = 0
    for i in range(n):
        p = i*i
        if p <= n:
            sq.add(p)
        else:
            break
    for i in range(n):
        p = i*i*i
        if p <= n:
            sq.add(p)
        else:
            break
    p = 0
    for x in sq:
        p += 1
    if n>1:
        print(p-1)
    else:
        print(p)