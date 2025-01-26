def xor_distance():
    t = int(input())
    while t != 0:
        a, b, r = map(int, input().split())
        n = 0
        sa, sb, sr = bin(a)[2:], bin(b)[2:], bin(r)[2:]

        if len(sa) > len(sb):
            n = len(sa)
            sb = '0' * (n - len(sb)) + sb
        elif len(sa) < len(sb):
            n = len(sb)
            sa = '0' * (n - len(sa)) + sa

        srl = len(sr)
        dif = n - len(sr)
        ans = 0
        c = 1

        for i in range(n):
            if dif > 0:
                dif -= 1
            else:
                if sa[i] == sb[i]:
                    ans += 2 * (int(sa[i]) * (2 ** (srl - c)))
                    c += 1

        print(ans)
        t -= 1

# Run the function
xor_distance()
    