

def fib_iterative(n):
    a = 0
    b = 1
    for _ in range(n):
        a, b = b, a + b
    return a


def fib_recursive(n):
    if n == 0 or n == 1:
        return n
    else:
        return fib_recursive(n-1) + fib_recursive(n-2)


def fib_dynamic(n):
    cache = {}
    return _fib_dynamic(n, cache)


def _fib_dynamic(n, cache):
    if n == 0 or n == 1:
        return n
    if n in cache:
        return cache[n]
    cache[n] = _fib_dynamic(n-1, cache) + _fib_dynamic(n-2, cache)
    return cache[n]


n = int(input())
print(fib_dynamic(n))
