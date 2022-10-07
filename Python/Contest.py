# # T = int(input())
# # a = list(map(int,input().split()))

# # S = int(input())
# # b = list(map(int,input().split()))
# # p = []
# # for i in a:
# #     if b.count(i) == 0:
# #         p.append(i)

# # print(*p)


# # n = int(input())
# # a1 = [int(num) for num in input().split(" ", n-1)]
# # m = int(input())
# # a2 = [int(num) for num in input().split(" ", m-1)]

# # for item in a1:
# #     if  item not in a2:
# #         print(item, end=' ')
# # print(a1)
# # print(a2)

# import sys,os,io
# import math
# from collections import defaultdict
# # def int(input()):
# #     return int(input())
# def li():
#     return list(map(int,input().split()))
# if(os.path.exists('input.txt')):
#     sys.stdin = open("input.txt","r") ; sys.stdout = open("output.txt","w")
# else:
#     input = io.BytesIO(os.read(0, os.fstat(0).st_size)).readline

# import bisect
# def lengthOfLIS(nums):
#     x = []
#     temp = [0]*(len(nums))
#     for i in range(len(nums)):
#         if not x:
#             x.append(nums[i])
#             temp[i]=len(x)
#             continue
#         ind = bisect.bisect_left(x,nums[i])
#         # replace bisect_left by bisect_right for longes non-dec subsequence
#         if ind==len(x):
#             x.append(nums[i])
#         else:
#             x[ind]=nums[i]
#         temp[i]=len(x)
#     return temp

# def lengthOfLDS(nums):
#     x = []
#     temp = [0]*(len(nums))
#     for i in range(len(nums)):
#         if not x:
#             x.append(nums[i])
#             temp[i]=len(x)
#             continue
#         ind = bisect.bisect_left(x,nums[i])
#         # replace bisect_left by bisect_right for longes non-dec subsequence
#         if ind==len(x):
#             x.append(nums[i])
#         else:
#             x[ind]=nums[i]
#         temp[i]=len(x)
#     return temp[::-1]

# def solve():
#     n = int(input())
#     l = li()
#     a = lengthOfLIS(l)
#     for i in range(n):
#         l[i]=-l[i]
#     l = l[::-1]
#     b = lengthOfLDS(l)
#     ans = 0
#     for i in range(n-1):
#         ans=max(ans,a[i]+b[i+1])
#     print(ans)



# ttt = 1
# ttt = int(input())
# # print(t)
# for _ in range(ttt):
#     solve()
# n = 3
# m = 3
# res = []
# rem = []
# for i in range(n):
#     for j in range(m):
#         res.append(0)
#     rem.append(res)
# print(rem)
# for i in range(n):
#     for j in range(m):
#         print(res[i][j])
#     print()
# print(res)

# t = int(input())
# for _ in range(t):
#     a = input()
#     s = []
#     for i in a:
#         s.append(i)
#     odd, even = 0, 0

#     for i in range(len(s)):
#         if (ord(s[i])-ord('0'))&1:
#             odd==1
#         else:
#             even+=1
#     if(((ord(s[len(s)-1]))-ord('0'))&1):
#         if odd>=2:
#             print("YES")
#         else:
#             print("NO")
#     else:
#         if even>=2:
#             print("YES")
#         else:
#             print("NO")









#
#
#
#
#
# def compute():
# 	ans = sum(x for x in range(1000) if (x % 3 == 0 or x % 5 == 0))
# 	return str(ans)
#
#
# if __name__ == "__main__":
# 	print(compute())





