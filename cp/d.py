

def ii(): return int(input())
def si(): return input()
def mi(): return map(int, input().strip().split(" "))
def li(): return list(mi())


'''**************Solution is Here***********'''

T = int(input())
for i in range(T):
    a,b,c,k = li()
    p = (a+b+c)
    if p%3 == 0 and p%2 != 0:
        print(f"Case {i+1}: Peaceful")
    else:
        print(f"Case {i+1}: Fight")