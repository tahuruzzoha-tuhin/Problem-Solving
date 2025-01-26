"""**************************************************************\
                BISMILLAHIR RAHMANIR RAHIM
\**************************************************************"""


#!/usr/bin/env python

import os
import sys
from io import BytesIO, IOBase
from math import *

if sys.version_info[0] < 3:
    from __builtin__ import xrange as range
    from future_builtins import ascii, filter, hex, map, oct, zip


# Start FASTIO
BUFSIZE = 8192
class FastIO(IOBase):
    newlines = 0
    def __init__(self, file):
        self._file = file
        self._fd = file.fileno()
        self.buffer = BytesIO()
        self.writable = "x" in file.mode or "r" not in file.mode
        self.write = self.buffer.write if self.writable else None

    def read(self):
        while True:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            if not b:
                break
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines = 0
        return self.buffer.read()

    def readline(self):
        while self.newlines == 0:
            b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
            self.newlines = b.count(b"\n") + (not b)
            ptr = self.buffer.tell()
            self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
        self.newlines -= 1
        return self.buffer.readline()

    def flush(self):
        if self.writable:
            os.write(self._fd, self.buffer.getvalue())
            self.buffer.truncate(0), self.buffer.seek(0)


class IOWrapper(IOBase):
    def __init__(self, file):
        self.buffer = FastIO(file)
        self.flush = self.buffer.flush
        self.writable = self.buffer.writable
        self.write = lambda s: self.buffer.write(s.encode("ascii"))
        self.read = lambda: self.buffer.read().decode("ascii")
        self.readline = lambda: self.buffer.readline().decode("ascii")


def print(*args, **kwargs):
    sep, file = kwargs.pop("sep", " "), kwargs.pop("file", sys.stdout)
    at_start = True
    for x in args:
        if not at_start:
            file.write(sep)
        file.write(str(x))
        at_start = False
    file.write(kwargs.pop("end", "\n"))
    if kwargs.pop("flush", False):
        file.flush()


if sys.version_info[0] < 3:
    sys.stdin, sys.stdout = FastIO(sys.stdin), FastIO(sys.stdout)
else:
    sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)


def input(): return sys.stdin.readline().rstrip("\r\n")


def prod(a, mod=10 ** 9 + 7):
    ans = 1
    for each in a:
        ans = (ans * each) % mod
    return ans


def gcd(x, y):
    while y:
        x, y = y, x % y
    return x


def lcm(a, b): return a * b // gcd(a, b)


def binary(x, length=16):
    y = bin(x)[2:]
    return y if len(y) >= length else "0" * (length - len(y)) + y


def check_freq(x):
    freq = {}
    for c in set(x):
        freq[c] = x.count(c)
    return freq


def numToDigit(x):
    box = []
    while(x):
        tmp = x % 10
        x = x//10
        box.append(tmp)
    box.reverse()
    return box


def ii(): return int(input())
def si(): return input()
def mi(): return map(int, input().strip().split(" "))
def li(): return list(mi())

MAXX = 100000000

'''**************Solution is Here***********'''

def min_sum_of_weights(t, test_cases):
    results = []

    for i in range(t):
        n = test_cases[i][0]
        l = test_cases[i][1]
        r = test_cases[i][2]
        c = test_cases[i][3]

        intervals = list(zip(l, r, c))

        intervals.sort(key=lambda x: x[1])

        min_weights = {}
        total_weight = 0

        for interval in intervals:
            left, right, weight = interval
            if right not in min_weights or weight < min_weights[right]:
                min_weights[right] = weight
                total_weight += weight * (right - left)

        results.append(total_weight)

    return results

def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        l = list(map(int, input().split()))
        r = list(map(int, input().split()))
        c = list(map(int, input().split()))

        l.sort()
        r.sort()

        neg_inter, pos_inter = [], []
        p1, p2 = 0, 0

        while p1 <= n and p2 < n:
            if p1 == n or l[p1] > r[p2]:
                last = neg_inter.pop()
                pos_inter.append(r[p2] - last)
                p2 += 1
            else:
                neg_inter.append(l[p1])
                p1 += 1

        pos_inter.sort()
        c.sort(reverse=True)

        ans = sum(pos_inter[i] * c[i] for i in range(n))
        print(ans)

if __name__ == "__main__":
    main()
