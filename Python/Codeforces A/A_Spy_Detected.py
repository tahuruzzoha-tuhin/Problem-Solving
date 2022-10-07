"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""




T = int(input())
for _ in range(T):
    n = int(input())
    a = [int(x) for x in input().split(' ')]
    b = []
    p = []
    p0_count = 0
    p1_count = 0
    index = 0
    j = 0
    q = a[0]
    

    for i in range(n):
        if( a[i] == q):
            p0_count += 1
    if(p0_count == 1):
        for i in range(n):
            if q == a[i]:
                print(i+1)
        # print(q)
    else:
        for i in range(n):
            if(q != a[i]):
                print( i+1)
    # print(q, p0_count)