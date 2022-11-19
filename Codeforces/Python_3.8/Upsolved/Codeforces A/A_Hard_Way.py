"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""


T = int(input())
for _ in range(T):
    x1, y1 = [int(x) for x in input().split(' ')]
    x2, y2 = [int(x) for x in input().split(' ')]
    x3, y3 = [int(x) for x in input().split(' ')]

    if y1==y2 and y3<y2:
        print(abs(x1-x2))
    elif y2==y3 and y1<y3:
        print(abs(x2-x3))
    elif y1==y3 and y2<y1:
        print(abs(x3-x1))
    else:
        print(0)