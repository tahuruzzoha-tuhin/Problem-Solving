"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""



T = int(input())
for _ in range(T):
    n, k = [int(x) for x in input().split(' ')]
    a = [int(x) for x in input().split(' ')]
    b = [int(x) for x in input().split(' ')]
    c = sorted(zip(a,b))
   
    j = 0
    for i,j in c:
        if(i<=k):
            k += j
        else:
            break
    print(k)
