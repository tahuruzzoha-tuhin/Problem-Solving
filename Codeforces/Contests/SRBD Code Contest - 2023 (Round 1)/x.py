import math


# Function to calculate the maximum number of participants for a test case
def max_participants(B, y):
    m = int(math.sqrt(B))  # Calculate the maximum number of problems that can be prepared
    round1 = m // 2       # Number of problems for the first round
    round2 = math.ceil(m / 2)  # Number of problems for the second round
    total_cost = round1**2 + round2**2  # Total cost of hosting both rounds
    max_participants = m * 2  # Maximum number of participants (2 participants per problem)
    
    return max_participants

# Read the number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    B, y = map(int, input().split())
    result = max_participants(B, y)
    print(result)
