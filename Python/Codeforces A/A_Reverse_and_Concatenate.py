t = int(input())
def isPal(s):
    i = 0
    j = len(s)-1
    while i <= j:
        if (s[i] != s[j]):
            return 0
        i += 1
        j -= 1
    return 1

for i in range(t):
    a, b = map(int, input().split())
    s = input()

    if b == 0:
        print(1)
    elif isPal(s) == 1:
        print(1)
    else:
        print(2)


