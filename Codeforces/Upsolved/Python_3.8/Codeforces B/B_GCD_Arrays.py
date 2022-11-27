"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""



T = int(input())
for _ in range(T):
    l, r, k = [int(x) for x in input().split(' ')]
    if l==r and l==1:
        print("NO")
    else:
        rem = 0
        p = r-l+1
        q = r//2
        s = (l-1)//2
        rem = p - (q-s)
        if rem<=k or l==r:
            print("YES")
        else:
            print("NO")