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

def max_total_friends(n, arr1, arr2, arr3):
    arr1.sort(reverse=True)
    arr2.sort(reverse=True)
    arr3.sort(reverse=True)

    result = 0
    for x in range(3):
        for y in range(3):
            for z in range(3):
                if (
                    arr1[x][1] != arr2[y][1]
                    and arr1[x][1] != arr3[z][1]
                    and arr2[y][1] != arr3[z][1]
                ):
                    result = max(result, arr1[x][0] + arr2[y][0] + arr3[z][0])

    print(result)


def main():
    t = int(input())  # Number of test cases

    for _ in range(t):
        size = int(input())  # Duration of winter holidays

        skiing_friends = [(int(x), i + 1) for i, x in enumerate(input().split())]
        movie_friends = [(int(x), i + 1) for i, x in enumerate(input().split())]
        board_games_friends = [(int(x), i + 1) for i, x in enumerate(input().split())]

        skiing_friends.sort(reverse=True)
        movie_friends.sort(reverse=True)
        board_games_friends.sort(reverse=True)

        max_total_friends(size, skiing_friends, movie_friends, board_games_friends)


if __name__ == "__main__":
    main()


