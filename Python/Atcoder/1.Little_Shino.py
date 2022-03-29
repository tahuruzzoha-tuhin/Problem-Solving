
n = int(input())
array=[int(x) for x in input().split(' ')]

sum=0
for i in array:
    sum+=int(i)
avg=int(sum/n)
print(avg+1)