"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())
for _ in range(T):
    Hc, Dc = [int(x) for x in input().split(' ')]
    Hm, Dm = [int(x) for x in input().split(' ')]
    k, w, a = [int(x) for x in input().split(' ')]

    for i in range(k + 1):
        nhc = Hc + i * a
        ndc = Dc + (k - i) * w
        if (Hm + ndc - 1) // ndc <= (nhc + Dm - 1) // Dm:
            print("YES")
            break
       
    else:
        print('NO')       