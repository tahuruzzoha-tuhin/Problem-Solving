"""**************************************************************\
                   BISMILLAHIR RAHMANIR RAHIM
****************************************************************
               AUTHOR NAME: MD. TAHURUZZOHA TUHIN
\**************************************************************"""





n = int(input())
s = input()
a = []
b = []
for i in s:
    a.append(i)
    # b.add(i)
ind = 0
terminal = 1
while(ind<n):
    print(a[ind], end='')
    ind += terminal
    terminal += 1
p = a[0]
b.append(p)
for i in range(1,n):
    if(a[i] != p):
        b.append(a[i])
        p = a[i]
    # print(i, end='')
# for i in b:
    # print(i, end='')
# print(b)
