t = input().split(" ")

w = ""
for i in t:
    w+=i
    w += " "
t = w.split(",")

ww = ""
for i in t:
    ww+=i
    ww += " "
t = ww.split(";")

pp = ""
for i in t:
    pp+=i
    pp += " "
s = pp.split(".")

# print(t)
p = []
s1 = ""
s2 = ""
mx, mn = 0, 0
for i in s:
    p.append(len(i))
    mx = max(mx, len(i))
p.sort()

for i in s:
    if(p[len(p)-1] == len(i)):
        s1 = i
        break
for i in s:
    if(p[0] == len(i)):
        s2 = i
        break

cns, cls = 0, 0
for i in s:
    if i == s2:
        cns += 1
    
for i in s:
    if i == s1:
        cls += 1
    
for i in s:
    if len(i) == mx:
        s3 = i
        break

print(s3) #long
print(s2) #short
print(s1) #most reapet

