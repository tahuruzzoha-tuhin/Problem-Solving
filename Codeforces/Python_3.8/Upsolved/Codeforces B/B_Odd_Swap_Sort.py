"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""

T = int(input())
for _ in range(T):
    n = int(input())
    ar = [int(x) for x in input().split(' ')]
    odds, evens = [], []
    for i in ar:
        if i%2 != 0:
            odds.append(i)
        else:
            evens.append(i)
    sort_odds , sort_evens = odds[::], evens[::]
    sort_odds.sort()
    sort_evens.sort()

    if sort_odds==odds and sort_evens==evens:
        print('Yes')
    else:
        print('No')