# """**************************************************************\
#                    BISMILLAHIR RAHMANIR RAHIM
# ****************************************************************
#                AUTHOR NAME: MD. TAHURUZZOHA TUHIN
# \**************************************************************"""


# #!/usr/bin/env python
# from __future__ import division, print_function

# import os
# import sys
# import math
# from io import BytesIO, IOBase
# from heapq import heappush, heappop, heapify
# from collections import defaultdict, Counter, deque

# if sys.version_info[0] < 3:
#     from __builtin__ import xrange as range
#     from future_builtins import ascii, filter, hex, map, oct, zip


# # Start FASTIO
# BUFSIZE = 8192


# class FastIO(IOBase):
#     newlines = 0

#     def __init__(self, file):
#         self._file = file
#         self._fd = file.fileno()
#         self.buffer = BytesIO()
#         self.writable = "x" in file.mode or "r" not in file.mode
#         self.write = self.buffer.write if self.writable else None

#     def read(self):
#         while True:
#             b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
#             if not b:
#                 break
#             ptr = self.buffer.tell()
#             self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
#         self.newlines = 0
#         return self.buffer.read()

#     def readline(self):
#         while self.newlines == 0:
#             b = os.read(self._fd, max(os.fstat(self._fd).st_size, BUFSIZE))
#             self.newlines = b.count(b"\n") + (not b)
#             ptr = self.buffer.tell()
#             self.buffer.seek(0, 2), self.buffer.write(b), self.buffer.seek(ptr)
#         self.newlines -= 1
#         return self.buffer.readline()

#     def flush(self):
#         if self.writable:
#             os.write(self._fd, self.buffer.getvalue())
#             self.buffer.truncate(0), self.buffer.seek(0)


# class IOWrapper(IOBase):
#     def __init__(self, file):
#         self.buffer = FastIO(file)
#         self.flush = self.buffer.flush
#         self.writable = self.buffer.writable
#         self.write = lambda s: self.buffer.write(s.encode("ascii"))
#         self.read = lambda: self.buffer.read().decode("ascii")
#         self.readline = lambda: self.buffer.readline().decode("ascii")


# def print(*args, **kwargs):
#     sep, file = kwargs.pop("sep", " "), kwargs.pop("file", sys.stdout)
#     at_start = True
#     for x in args:
#         if not at_start:
#             file.write(sep)
#         file.write(str(x))
#         at_start = False
#     file.write(kwargs.pop("end", "\n"))
#     if kwargs.pop("flush", False):
#         file.flush()


# if sys.version_info[0] < 3:
#     sys.stdin, sys.stdout = FastIO(sys.stdin), FastIO(sys.stdout)
# else:
#     sys.stdin, sys.stdout = IOWrapper(sys.stdin), IOWrapper(sys.stdout)


# def input(): return sys.stdin.readline().rstrip("\r\n")


# def prod(a, mod=10 ** 9 + 7):
#     ans = 1
#     for each in a:
#         ans = (ans * each) % mod
#     return ans


# def gcd(x, y):
#     while y:
#         x, y = y, x % y
#     return x


# def lcm(a, b): return a * b // gcd(a, b)


# def binary(x, length=16):
#     y = bin(x)[2:]
#     return y if len(y) >= length else "0" * (length - len(y)) + y


# def check_freq(x):
#     freq = {}
#     for c in set(x):
#         freq[c] = x.count(c)
#     return freq


# def ii(): return int(input())
# def si(): return input()
# def mi(): return map(int, input().strip().split(" "))
# def li(): return list(mi())


# MAXX = 100000000


# '''**************Solution is Here***********'''


# def main():
#     T = int(input())
#     for _ in range(T):
#         n, k = list(map(int, input().strip().split(" ")))
#         O = k
#         s = input()
#         S = []
#         p = s
#         s = []
#         for i in p:
#             s.append(int(i))
#             S.append(int(i))
#         res = [0]*n
#         o = 0
#         i = 0
#         while(i < n and k > 0):
#             s[i] ^= o
#             if (k % 2 != s[i]-0) or (i == n-1):
#                 pass
#             res[i] += 1
#             k -= 1
#             o ^= 1
#             i += 1
#         res[-1] += k
#         for i in range(n):
#             if (O-res[i]) % 2:
#                 S[i] ^= 1
#         # print(*S)
#         for i in S:
#             print(i, end='')
#         print()
#         for i in res:
#             print(i, end=' ')
#         print()


# # End FASTIO
# if __name__ == "__main__":
#     main()


def main():
    T = int(input())
    for _ in range(T):
        n, k = list(map(int, input().strip().split(" ")))
        O = k
        s = input()
        S = []
        p = s
        s = []
        for i in p:
            s.append(i)
            S.append(i)
        res = [0]*n
        o = 0
        i = 0
        while(i < n and k > 0):
            q = int(s[i]) ^ o
            s[i] = q
            if (k % 2 != s[i]-ord('0')) or (i == n-1):
                pass
            res[i] += 1
            k -= 1
            o ^= 1
            i += 1
        res[-1] += k
        for i in range(n):
            if (O-res[i]) % 2:
                q = int(S[i]) ^ 1
                S[i] = q
        # print(*S)
        for i in S:
            print(i, end='')
        print()
        for i in res:
            print(i, end=' ')
        print()


main()
111110
1 0 0 0 0 2 
111110
0 1 1 1 0 1 
000000
0 0 0 0 0 0 
100110
1 0 0 0 0 0 
111111
1 0 1 1 0 8 
111110
1 1 0 0 0 10