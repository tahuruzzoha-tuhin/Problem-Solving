import os
import sys
import math
from io import BytesIO, IOBase
import io
from fractions import Fraction
import collections
from itertools import permutations
from collections import defaultdict
from collections import deque
from collections import Counter
import threading
 
sys.setrecursionlimit(300000)
threading.stack_size(10**8)
 
BUFSIZE = 8192
 
class FastIO(IOBase):
    newlines = 0
 
    def __init__(self, file):
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
 
 
sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)
input = lambda: sys.stdin.readline().rstrip("\r\n")


def ii(): return int(input())
def si(): return input()
def mi(): return map(int, input().strip().split(" "))
def li(): return list(mi())


'''**************Solution is Here***********'''


MAXX = 100000000
def main():
    tt=1
    tt=int(input())
    for _ in range (tt):
        #input()
        n=int(input())
        #n,m=map(int,input().split())
        #a=list(map(int,input().split()))
        #b=list(map(int,input().split()))
        #s=input()
        #n=len(s)
        d=defaultdict(list)
        ch=1
        for i in range (n-1):
            x,y=map(int,input().split(' '))
            x-=1
            y-=1
            d[x].append([y,i])
            d[y].append([x,i])
            if len(d[x])>2 or len(d[y])>2:
                ch=0
        if not ch:
            print(-1)
            continue
        ans=[0]*(n-1)
        def dfs(par,node,prev):
            if prev==2:
                curr=3
            else:
                curr=2
            for neigh, ind in d[node]:
                if neigh != par:
                    ans[ind]=curr
                    dfs(node,neigh,curr)
        for i in range (n):
            if len(d[i])==1:
                dfs(-1,i,2)
                break
        print(*ans)

t = threading.Thread(target=main)
t.start()
t.join()
