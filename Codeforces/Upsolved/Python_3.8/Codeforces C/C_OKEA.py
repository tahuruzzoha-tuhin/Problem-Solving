"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""


T = int(input())
for _ in range(T):
    n, k = [int(x) for x in input().split(' ')]
    h_e = (n*k)//2
    h_o = (n*k) - h_e
    r_e = k*(n//2)
    r_o = (n*k) - r_e
    
    if (h_e != r_e) or (h_o != r_o):
        print('NO')
        continue
    print('YES')

    odd = 1
    even = 2

    for i in range(1,n+1):
        for j in range(1,k+1):
            if i%2 != 0:
                print(odd, end=' ')
                odd += 2
            else:
                print(even, end=' ')
                even += 2
        print() 
