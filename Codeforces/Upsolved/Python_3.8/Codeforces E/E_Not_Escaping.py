"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""





#!/usr/bin/env python
from __future__ import division, print_function

import os
import sys
from math import *
from io import BytesIO, IOBase
from heapq import heappush,heappop,heapify

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

input = lambda: sys.stdin.readline().rstrip("\r\n")



def ii(): return int(input())
def si(): return input()
def mi(): return map(int, input().strip().split(" "))
def li(): return list(mi())


'''**************Solution is Here***********'''


MAXX = 100000000
def main():
    inp = [int(x) for x in sys.stdin.buffer.read().split()]; ii = 0
    t = inp[ii]; ii += 1
    for _ in range(t):
        n,m,k = inp[ii: ii + 3]; ii += 3
    
        X = inp[ii: ii + n]; ii += n
    
        heights = [[] for _ in range(n)]
        heights[0].append(0)
        heights[n - 1].append(m - 1)
    
        iii = ii
        for _ in range(k):
            a,b,c,d,h = inp[ii: ii + 5]; ii += 5
    
            a -= 1
            b -= 1
            c -= 1
            d -= 1
    
            heights[a].append(b)
            heights[c].append(d)
        ii = iii
        
        heights = [sorted(set(height)) for height in heights]
        mappers = [{} for _ in range(n)]
        for i in range(n):
            height = heights[i]
            for j in range(len(height)):
                mappers[i][height[j]] = j
    
        jumps = [[[] for _ in range(len(height))] for height in heights]
        for _ in range(k):
            a,b,c,d,h = inp[ii: ii + 5]; ii += 5
    
            a -= 1
            b -= 1
            c -= 1
            d -= 1
    
            b = mappers[a][b]
            d = mappers[c][d]
    
            jumps[a][b].append((c,d,h))
    
        
        inf = 10**18
    
        DP = [[inf] * len(height) for height in heights]
        DP[0][0] = 0
        
        for i in range(n):
            x = X[i]
            dp = DP[i]
            jump = jumps[i]
            height = heights[i]
            mm = len(height)
    
            if not mm:
                continue
    
            val = dp[0]
            for j in range(1,mm):
                val = dp[j] = min(val + x * (height[j] - height[j - 1]), dp[j])
            
            val = dp[-1]
            for j in range(mm - 1)[::-1]:
                val = dp[j] = min(val + x * (height[j + 1] - height[j]), dp[j])
    
            for j in range(mm):
                for c,d,h in jump[j]:
                    DP[c][d] = min(DP[c][d], dp[j] - h)
    
        
        out = DP[-1][-1]
        if out >= 10**17:
            print('NO ESCAPE')
        else:
            print(out)







# End FASTIO
if __name__ == "__main__":
    main()