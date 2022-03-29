"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""




T = int(input())
for _ in range(T):

    m=[];c=[]
    n=int(input())
    for i in range(n):
        m.append(list(input()))

    for i in range(n):
        for j in range(n):
            if m[i][j]=='*':
                c.append([i,j])
    if c[0][1]==c[1][1]:
        m[c[0][0]][c[1][1]-1]='*'
        m[c[1][0]][c[0][1]-1]='*'

    elif c[0][0]==c[1][0]:
        m[c[0][0]-1][c[1][1]]='*'
        m[c[1][0]-1][c[0][1]]='*'

    else:
        m[c[0][0]][c[1][1]]='*'
        m[c[1][0]][c[0][1]]='*'

    for i in m:
        for j in i:
            print(j,end="")
        print()

        # for i in range(1, n-1):
        # if(a[i]>a[i-1] and a[i]>a[i+1]):
        #     count+=1
        #     if(i<(n-2)):
        #         a[i+1]=max(a[i],a[i+2])
        #     else:
        #         a[i+1]=a[i]