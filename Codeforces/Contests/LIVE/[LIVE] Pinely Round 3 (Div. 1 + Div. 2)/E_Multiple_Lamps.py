def solve_test_case(n, m, pairs):
    buttons_pressed = set()
    lamps_on = set()

    # Function to check if a button can be pressed
    def can_press(button):
        return button not in buttons_pressed and button in pairs and all(pair in lamps_on for pair in pairs[button])

    # Press buttons greedily to turn off as many lamps as possible
    for button in range(1, n + 1):
        if len(buttons_pressed) > n // 5:
            break

        if can_press(button):
            buttons_pressed.add(button)
            lamps_on.update(range(button, n + 1, button))

    # Check if the solution is valid
    if len(lamps_on) > n // 5:
        return -1

    return len(buttons_pressed), buttons_pressed

def main():
    t = int(input())
    for _ in range(t):
        n, m = map(int, input().split())
        pairs = {}
        for _ in range(m):
            u, v = map(int, input().split())
            pairs[u] = pairs.get(u, []) + [v]
            pairs[v] = pairs.get(v, []) + [u]

        result = solve_test_case(n, m, pairs)

        if result == -1:
            print(-1)
        else:
            k, buttons = result
            print(k)
            print(*buttons)

if __name__ == "__main__":
    main()
