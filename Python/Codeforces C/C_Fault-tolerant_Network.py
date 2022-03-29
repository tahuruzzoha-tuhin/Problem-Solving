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
    T = ii()
    for _ in range(T):
        n = ii()
        a = li()
        b = li()
        
        for i in range(n):
            if i==0 :
                node1 = abs(b[0]-a[i])
                node2 = abs(b[n-1]-a[i])

            else:
                if abs(b[0]-a[i])<node1 :
                    node1 = abs(b[0]-a[i])

                if abs(b[n-1]-a[i])<node2 :
                    node2 = abs(b[n-1]-a[i])
        
        for i in range(n):
            if i==0 :
                node3 = abs(a[0]-b[i])
                node4 = abs(a[n-1]-b[i])
                
            else:
                if abs(a[0]-b[i])<node3 :
                    node3 = abs(a[0]-b[i])

                if abs(a[n-1]-b[i])<node4 :
                    node4 = abs(a[n-1]-b[i])
        
        connected = abs(a[0]-b[0])+abs(a[n-1]-b[n-1])

        if abs(a[0]-b[0])+node2+node4 < connected :
            connected = abs(a[0]-b[0])+node2+node4

        if abs(a[n-1]-b[n-1])+node1+node3 < connected :
            connected = abs(a[n-1]-b[n-1])+node1+node3

        if abs(a[n-1]-b[0])+abs(a[0]-b[n-1]) < connected :
            connected = abs(a[n-1]-b[0])+abs(a[0]-b[n-1])
        
        if abs(a[0]-b[n-1])+node1+node4 < connected :
            connected = abs(a[0]-b[n-1])+node1+node4

        if abs(a[n-1]-b[0])+node3+node2 < connected :
            connected = abs(a[n-1]-b[0])+node3+node2

        
        connected = min(connected,node1+node2+node3+node4)


        if node1+node2+node3+node4 < connected :
            connected = node1+node2+node3+node4

        print(connected)

# End FASTIO
if __name__ == "__main__":
    main()