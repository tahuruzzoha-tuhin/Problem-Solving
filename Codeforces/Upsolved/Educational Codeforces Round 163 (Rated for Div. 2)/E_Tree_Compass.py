from collections import defaultdict

def dfs(node, parent, depth):
    global max_depth, max_depth_vertex
    if depth > max_depth:
        max_depth = depth
        max_depth_vertex = node
    
    for neighbor in tree[node]:
        if neighbor != parent:
            dfs(neighbor, node, depth + 1)


# Read the number of test cases
t = int(input())

# Process each test case
for _ in range(t):
    # Read inputs
    n = int(input())
    
    # Initialize the tree
    tree = defaultdict(list)
    for _ in range(n - 1):
        u, v = map(int, input().split())
        tree[u].append(v)
        tree[v].append(u)
        
    # Find the vertex with maximum depth
    max_depth = -1
    max_depth_vertex = -1
    dfs(1, 0, 0)
    
    # Color the vertices using the minimum possible number of operations
    operations = []
    for neighbor in tree[max_depth_vertex]:
        if neighbor != parent:
            operations.append((neighbor, 1))
            dfs(neighbor, max_depth_vertex, 2)

    
    for i in range(2, max_depth + 1):
        operations.append((max_depth_vertex, i))
        for neighbor in tree[max_depth_vertex]:
            if neighbor != parent:
                operations.append((neighbor, i - 1))
    
    # Print the minimum number of operations and the operations themselves
    print(len(operations))
    for v, d in operations:
        print(v, d)
