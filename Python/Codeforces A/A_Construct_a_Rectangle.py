"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""




for _ in range(int(input())):
    l1,l2,l3 = [int(x) for x in input().split(' ')]
    
    if l1==l2+l3:
        print("YES")

    elif l2==l1+l3:
        print("YES")

    elif l3==l2+l1:
        print("YES")

    elif l1==l2 and l3%2==0:
        print("YES")

    elif l1==l3 and l2%2==0:
        print("YES")

    elif l3==l2 and l1%2==0:
        print("YES")
    else:
        print("NO")