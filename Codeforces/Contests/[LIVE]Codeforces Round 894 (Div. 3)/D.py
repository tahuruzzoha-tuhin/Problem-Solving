import math

t = int(input())  

for _ in range(t):
    n = int(input()) 

    k = int(math.sqrt(2*n)-3)
    while(k*(k+1)//2<=n):
        k+=1

    print(n+k*(3-k)//2)
