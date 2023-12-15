import sys
from typing import List, Tuple


def read_int() -> int:
    return int(input().strip())

def read_int_list() -> List[int]:
    return list(map(int, input().split()))

def business_logic() -> None:
    n = read_int()
    vec1 = read_int_list()

    total_sum = sum(vec1)
    if total_sum % n == 0:
        avg = total_sum // n
        candy = []
        party = []
        
        for z in vec1:
            if z > avg:
                candy.append(z - avg)
            elif z < avg:
                party.append(avg - z)
        
        if len(candy) != len(party):
            print("NO")
            return
        
        candy.sort()
        party.sort()

        if candy == party:
            print("YES")
        else:
            print("NO")
    else:
        print("NO")

def main() -> None:
    t = read_int()
    for _ in range(t):
        business_logic()

if __name__ == "__main__":
    main()
