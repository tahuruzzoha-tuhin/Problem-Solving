"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())


for _ in range(T):
    
    n = int(input())
    a=list(map(int,input().split()))

    count = 0
    i = n-2
    q = a[n-1]
    
    ind = n
    list1 = []
    list2 = []
    x=0
    y=0
    ans=0
    
    while(i>=0):
        d = n-1-i
        if(a[i] != q):
            count += 1
            i = i-d
        else:
            i = i-1

    
    for i in range(n):
        list1.append(n-1+i)
        list2.append(n-2+i)

    for i in range(n):
        if(list1[i] == 1):
            x = x+pow(2,i)

        if(list2[i] == 1):
            y = y+pow(2,i)

    ans = min(ans, (x-y)+1)

    for i in range(n):
        if(list2[i]==1 and list1[i]==0):
            f = pow(2,i+1)
            f = f-x
            ans = min(ans, f+1)

        if(list1[i]==1):
            x = x+pow(2,i+1)

    print(count)
