t = int(input())
for p in range(t):
    s = input()
    j = 0
    sOdd = ''
    sEven = ''
    for i in s:
        if j%2 == 0:
            sEven += i
        else:
            sOdd += i
        j += 1
    print(sEven, sOdd)