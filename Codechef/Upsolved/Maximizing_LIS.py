"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""





#!/usr/bin/env python
from __future__ import division, print_function

import os
import sys
import bisect
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
MAXX = 100000000


'''**************Solution is Here***********'''
def lengthOfLIS(nums):
    x = []
    temp = [0]*(len(nums))
    for i in range(len(nums)):
        if not x:
            x.append(nums[i])
            temp[i]=len(x)
            continue 
        ind = bisect.bisect_left(x,nums[i])
        if ind==len(x):
            x.append(nums[i])
        else:
            x[ind]=nums[i]
        temp[i]=len(x)
    return temp

def lengthOfLDS(nums):
    x = []
    temp = [0]*(len(nums))
    for i in range(len(nums)):
        if not x:
            x.append(nums[i])
            temp[i]=len(x)
            continue 
        ind = bisect.bisect_left(x,nums[i])

        if ind==len(x):
            x.append(nums[i])
        else:
            x[ind]=nums[i]
        temp[i]=len(x)
    return temp[::-1]


def main():
    T = ii()
    for _ in range(T):
        n = ii()
        l = li()
        a = lengthOfLIS(l)
        for i in range(n):
            l[i]=-l[i]
        l = l[::-1]
        b = lengthOfLDS(l)
        ans = 0
        for i in range(n-1):
            ans=max(ans,a[i]+b[i+1])
        print(ans)



if __name__ == "__main__":
    main()