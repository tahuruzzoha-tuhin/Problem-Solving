
input = lambda: sys.stdin.readline().rstrip("\r\n")


def ii(): return int(input())
def si(): return input()
def mi(): return map(int, input().strip().split(" "))
def li(): return list(mi())
MAXX = 100000000


'''**************Solution is Here***********'''

def main():
    T = ii()
    for _ in range(T):
        # n = ii()
        x,y,d = li()
        print("YES" if abs(x-y)<=d else "NO")






# End FASTIO
if __name__ == "__main__":
    main()