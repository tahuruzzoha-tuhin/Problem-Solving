def main():
    t = int(input())
    while t > 0:
        n, k = map(int, input().split())
        # if k>=100:
        #     print(n+1)
        #     break
        sx = 1
        while (k>0):
            sx *= 2
            k -= 1
        t -= 1
        print(min(sx, n+1))

if __name__ == "__main__":
    main()
