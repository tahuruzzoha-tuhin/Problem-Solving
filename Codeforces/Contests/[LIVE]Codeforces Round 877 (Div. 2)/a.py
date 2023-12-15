import math

def solve_main():
    n = int(input())
    pn = list(map(int, input().split()))

    a, b, c, i = 0, 0, 0, 0
    for x in pn:
        if x == 1:
            a = i
        elif x == 2:
            b = i
        elif x == n:
            c = i
        i += 1
    
    if c != 0 and c != n - 1:
        if a < c:
            print(b + 1, c + 2)
        else:
            print(b + 1, c)
    else:
        if c < a and b < a:
            print(b + 1, c + 1)
        elif c > a and b > a:
            print(b + 1, c + 1)
        else:
            print(a + 1, c + 1)


t = int(input())
for _ in range(t):
    solve_main()
