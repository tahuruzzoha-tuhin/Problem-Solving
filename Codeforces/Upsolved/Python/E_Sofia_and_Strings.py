
def ii(): return int(input())
def si(): return input()
def mi(): return map(int, input().strip().split(" "))
def li(): return list(mi())

MAXX = 100000000

'''**************Solution is Here***********'''

def main():
    # T = 1
    T = ii()
    for _ in range(T):
        n, m = li()
        s1 = si()
        s2 = si()
        lim = [0] * m
        flag = 0

        for c in range(25, -1, -1):
            j = 0

            for i in range(m):
                while j < lim[i]:
                    j += 1

                lim[i] = j

                if s2[i] != chr(c + ord('a')):
                    continue

                while j < n and s1[j] != chr(c + ord('a')):
                    j += 1

                if j >= n:
                    flag = 1
                    break

                j += 1

            if flag:
                break

        if flag:
            print("NO")
        else:
            print("YES")
        

    
# End FASTIO
if __name__ == "__main__":
    main()


