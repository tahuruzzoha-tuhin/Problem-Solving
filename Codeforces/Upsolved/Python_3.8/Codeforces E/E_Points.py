"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""




T = int(input())
x = 0
y = 0
s = 0
sx = 0
sy = 0
for _ in range(T):
    # n = int(input())
    x,y = [int(x) for x in input().split(' ')]
    s+=(x*x+y*y)
    sx+=x
    sy+=y
print(s*T-(sx*sx+sy*sy))