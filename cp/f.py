

# def ii(): return int(input())
# def si(): return input()
# def mi(): return map(int, input().strip().split(" "))
# def li(): return list(mi())


# '''**************Solution is Here***********'''


# def check_freq(x):
#     freq = {}
#     for c in set(x):
#         freq[c] = x.count(c)
#     return freq


# T = 1
# T = ii()
# stt = []
# cntyr = 0
# cntbld = 0
# yr = []
# bld = []
# bld_grp = ["A+", "A-", "AB+", "AB-", "B+", "B-", "O+", "O-"]

# # 01/02/2023#15:58:31 2022100011006@seu.edu.bd 28/07/2001 A+
# for _ in range(T):
#     s = si().replace("#", " ")
#     # print(s)
#     stt.append(s)
    
# final_last = []
# for i in stt:
#     p = i[0:19]
#     pp = p[:10]
#     pp = pp.split("/")
#     pp.reverse()
#     sd = "/".join(pp)
    
#     fg = p[11:]
#     neww = sd + " " + fg
#     # print(neww)
#     final_last.append({"timestamp": neww, "last":i[20:]})

# # # print(final_last)
# for i in final_last:
#     print(i)
# print()
# final_last.sort(key=lambda x:x['timestamp'])

# for i in final_last:
#     print(i)
# st = []
# for i in final_last:
#     st.append(i['last'])
# # print(st)
# st.reverse()
# # print(st)
# # 2018200010061
# reg = set()
# for s in st:
#     ts = s[:13]
#     reg.add(ts)
# # print(reg)

# i = 0
# final = []
# for i in reg:
#     j=0
#     for k in st:
#         if j==0 and i in k:
#             final.append(k)
#             j = 1
#         else :
#             j = 0
# # print(final)
# for i in final:
#     ps = i[25:]
#     p = ps[6:]
#     # print(p)
#     yr.append(p[:4])
#     bld.append(p[5:])
#     # print(ps)
# ans_yr = check_freq(yr)
# ans_bld = check_freq(bld)

# yr_keys = list(ans_yr.keys())
# yr_keys.sort()
# final_yr = {i: ans_yr[i] for i in yr_keys}

# # print(final_yr)
# bld_keys = list(ans_bld.keys())
# bld_keys.sort()
# final_bld = {i: ans_bld[i] for i in bld_keys}

# # print(final_bld)
# chk_bld = []
# # for i in range(8):
# for j in final_bld:
#     chk_bld.append(j)
        
# # print(chk_bld)
# for item in bld_grp:
#     if item in chk_bld:
#         print(f"{item} {final_bld[item]}")
#     else:
#         print(f"{item} 0")
    
# for i in final_yr:
#     print(f"{i} {final_yr[i]}")


