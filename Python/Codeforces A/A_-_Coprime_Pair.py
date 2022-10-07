import math
L,R = [int(x) for x in input().split(' ')]
p = []
j = 0
for i in range(L,R+1):
    if math.gcd(i, R-j) == 1:
        p.append(i)
        j+=1
print(max(p)-min(p))
