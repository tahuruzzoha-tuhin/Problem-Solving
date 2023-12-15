"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

def ii(): return int(input())
def si(): return input()
def mi(): return map(int, input().strip().split(" "))
def li(): return list(mi())

N = ii()
XY = []
for i in range(N):
    x,y = li()
    XY.append((x,y))
s = si()
r = []
l = []
for i in range(N):
    if s[i] != 'R':
        l.append(XY[i])
    else:
        r.append(XY[i])
l.sort(key = lambda x: x[1])
r.sort(key = lambda x: x[1])
for i in range(len(l)):
    a,b = l[i]
    for j in range(len(r)):
        c,d = r[j]
        if b == d:
            if a>c:
                print('Yes')
                exit(0)
print('No')



