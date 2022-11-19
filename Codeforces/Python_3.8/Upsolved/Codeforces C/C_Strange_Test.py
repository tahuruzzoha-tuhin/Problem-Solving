"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())
for _ in range(T):
    a, b = [int(x) for x in input().split(' ')]
    ans = -1
    box1= []
    box2= []
    j=1
    i=0
    for i in range(0,21):
        if(b&j):
            box2.append(1)
        else:
            box2.append(0)
        j *= 2
    for a1 in range(a, b):
        j=1
        box1.clear()
        for i in range(0, 21):
            if(a1&j):
                box1.append(1)
            else:
                box1.append(0)
            j *= 2
        b1 = 0
        j = 1
        for _ in range(1, 21):
            j *= 2
        
        i = 20
        while(i>=0):
            if( box1[i] == 0 and box2[i] == 1):
                b1 += j
            elif( box1[i] == 1 and box2[i] == 1):
                b1 += j
            elif( box1[i] == 1 and box2[i] == 0):
                b1 += j
                break
            j //= 2
            i -= 1
        x = (a1|b1)
    
        if(ans == -1):
            ans = (a1-a)+(b1-b)+1+x-b1
        else:
            ans = min(ans, (a1-a)+(b1-b)+1+x-b1)
        
    ans = min(ans, b-a)
    print(ans)
