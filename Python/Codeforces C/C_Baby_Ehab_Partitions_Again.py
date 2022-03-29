"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""





#!/usr/bin/env python
from __future__ import division, print_function

import os
import sys
from math import gcd
from io import BytesIO, IOBase
from heapq import heappush,heappop,heapify
from collections import defaultdict, Counter, deque

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
    

def ii(): return int(input())
def si(): return input()
def mi(): return map(int, input().strip().split(" "))
def li(): return list(mi())
MAXX = 100000000


'''**************Solution is Here***********'''
def equalPartition(sm,N, arr):
        # code here
        s=sm
        #s has to be even for halves to exist
        # if s%2==1:
        #     return 0
        mat=[]
        # p=s//2
        p=sm
        
        #initialization of DP table
        for i in range(N+1):
            row=[]
            for j in range(p+1):
                if j==0:
                    row.append(1)
                elif i==0:
                    row.append(0)
                else:
                    row.append(2)
            mat.append(row)
       # print(mat)
        
        # DP table
        for i in range(1,N+1):
            for j in range(1,p+1):
                if arr[i-1]>j:
                    mat[i][j]=mat[i-1][j]
                    
                else:
                    mat[i][j]=max(mat[i-1][j],mat[i-1][j-arr[i-1]])
        return mat[-1][-1]


def solve(arr,n):
    sm = sum(arr)
    if sm%2==1:
        return False
    return 1

def main():
    T = 1
    for _ in range(T):
        n = ii()
        A = li()
        # if (solve(a, n)) == True:
        #     ans = -1
        #     for i in range(n):
        #         b = [0]*n
        #         k = 0
        #         for j in range(n):
        #             if i==j:
        #                 continue
        #             b[k] = a[j]
        #             k += 1
        #         if (solve(b,k) == False):
        #             ans = i
        #             break
        #         # if (solve(b,k) == True):
        #         #     ans = i+1
        #         #     break
        #     print(1)
        #     print(ans+1)
        # n = int(input())
        # A = list(map(int,input().split()))
        s = sum(A)
        M = 2*10**5+1
        dp = [0]*(M+5)
        dp[0] = 1
        g = A[0]
        ind = 0
        for a in A:
            g = gcd(a,g)
            for j in range(M)[::-1]:
                if j+a <= M:
                    dp[j+a] |= dp[j]
        if s%2 or dp[s//2] == 0:
            print(0)
            exit()
        for i,a in enumerate(A,1):
            if (a//g)%2:
                print(1)
                print(i)
                exit()
            

        else:
            print(0)






# End FASTIO
if __name__ == "__main__":
    main()