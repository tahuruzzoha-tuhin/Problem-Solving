import math


def can_add_closest_point(n, points):
    for i in range(1, n):
        if math.fabs(points[i-1] - points[i]) > 1  and n==2:
            return "YES"
    return "NO"

t = int(input())
for _ in range(t):
    n = int(input())
    points = list(map(int, input().split()))
    print(can_add_closest_point(n, points))
