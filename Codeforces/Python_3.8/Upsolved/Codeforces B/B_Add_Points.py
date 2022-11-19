def gcdivisor(x, y):
    while y != 0:
        (x, y) = (y, x % y)
    return x
    
    
num = int(input())
arr = input()
lst = list(map(int,arr.split(' ')))
lst.sort()

val = 0
fst = 0
ffval = 0
x = 0

for i in lst:
	if (fst<2) :
		if(fst==1):
		     val = i - x
		else:
		          
		          ffval = i
		fst = fst+1 
		x = i
	else:
		val = gcdivisor(val, i - x)
		x = i
		


if(ffval<=0):
	x = x + abs(ffval)
	cnt = int(x/val + (x%val)) + 1
elif(ffval>0):
	cnt = int(x/val) + (x%val)
	ffval = ffval - 1
	cnt = cnt - int(ffval/val )
print(cnt-num)
		