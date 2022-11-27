"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""


T = int(input())
for _ in range(T):
   n = int(input())
   aa = {}
   a = {int(x) for x in input().split(' ')}
   
   b = len(a)
   for i in range(1,n+1):
       if i<=b:
           print(b, end=" ")
        
       else:
           if b<n:
               b += 1
           print(b, end=" ")
   print()