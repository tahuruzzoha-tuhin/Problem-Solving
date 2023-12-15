"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""



n,m = [int(x) for x in input().split(' ')]
a = [int(x) for x in input().split(' ')]
b = [int(x) for x in input().split(' ')]
c = list()
d = set()

for i in b:
    d.add(i)

j = 0
p = 0
q = 0

for i in range(1, n+1):
    p = a.count(i)
    c.append([i, p])
    j+=1



if(len(d)==1):
    w = 0
    for i in range(n):
        if(m>1 and c[i][0] == b[w] ):
            q+=1
            w += 1
else:
    for i in range(m+1):
        if(c[i][1]):
            q+=1


if(q>=m):
    print("Yes")
else:
    print("No")
