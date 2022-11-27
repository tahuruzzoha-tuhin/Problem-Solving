"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""




T = int(input())
for _ in range(T):
    n = int(input())
    perm = [0]*(n-1)
    # print(perm)
    i = 2
    for j in range(n-1):
        perm[j] = i
        i += 1
    perm.reverse()
 
    for i in range(n):
        perm.insert(i,1)
        print(*perm)
        perm.pop(i)
    