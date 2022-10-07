"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())


def isPalindrome(str):
    for i in range(0, int(len(str)/2)):
        if str[i] != str[len(str)-i-1]:
            return False
    return True

for _ in range(T):
    n = int(input())
    s = input()
    for i in range(n+1):
        s1 = s[i:]
        s2 = s[:-i]
        p = isPalindrome(s1)
        q = isPalindrome(s2)
    if n>=3:
        print("NO")
    elif (s=='00' or s=='11') and n==2:
        print("NO")
    else:
        print("YES")
